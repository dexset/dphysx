import dphysx;
import std.stdio;
import std.string;
string toDString( const(char*) c_str ) nothrow
{
    if( c_str is null ) return "";
    char *ch = cast(char*)c_str;
    string ret;
    while( *ch++ != '\0' ) ret~=*ch;
    return ret;
}

void err_callback( PxErrorCode code, const char* message, const char* file, int line )
{
    writeln( "Error:", code, ":", toDString( file ) );
}

void main()
{
    auto error_callback = getDErrorCallback( &err_callback );
    auto allocator_callback = getDefaultAllocatorCallback();

    auto foundation = getFoundation( PX_PHYSICS_VERSION, allocator_callback, error_callback );
    assert( foundation !is null );

    auto profile_zone_manager = getProfileZoneManager( foundation );
    assert( profile_zone_manager !is null );

    auto tolerances_scale = getTolerancesScale();
    assert( tolerances_scale !is null );

    auto physics = getPhysics( PX_PHYSICS_VERSION, foundation, tolerances_scale, profile_zone_manager );
    assert( physics !is null );

    auto cooking_params = getCookingParams( tolerances_scale );
    assert( cooking_params !is null );

    assert( initExtensions( physics ) );

    auto scene_desc = getSceneDesc( tolerances_scale );
    assert( scene_desc !is null );
    auto scene = physics_createScene( physics, scene_desc );
    assert( scene !is null );

    closeExtensions();

    releasePhysics( physics );
    releaseProfileZoneManager( profile_zone_manager );
    releaseFoundation( foundation );

    delete error_callback;
    delete allocator_callback;
    delete tolerances_scale;

    writeln( "PhysX test pass" );
}
