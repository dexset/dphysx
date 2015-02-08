module dphysx.base;

alias uint PxU32;
alias void* PxAllocatorCallback;
alias void* PxErrorCallback;
alias void* PxFoundation;
alias void* PxProfileZoneManager;
alias void* PxTolerancesScale;
alias void* PxPhysics;
alias void* PxCookingParams;
alias void* PxCooking;

enum PX_PHYSICS_VERSION_MAJOR = 3;
enum PX_PHYSICS_VERSION_MINOR = 3;
enum PX_PHYSICS_VERSION_BUGFIX = 2;

enum PX_PHYSICS_VERSION = ((PX_PHYSICS_VERSION_MAJOR<<24) + (PX_PHYSICS_VERSION_MINOR<<16) + (PX_PHYSICS_VERSION_BUGFIX<<8) + 0);

enum PxErrorCode
{
    eNO_ERROR				= 0,
    eDEBUG_INFO				= 1,
    eDEBUG_WARNING			= 2,
    eINVALID_PARAMETER		= 4,
    eINVALID_OPERATION		= 8,
    eOUT_OF_MEMORY			= 16,
    eINTERNAL_ERROR			= 32,
    eABORT					= 64,
    ePERF_WARNING			= 128,
    eMASK_ALL				= -1
}

alias void function( PxErrorCode, const char*, const char*, int ) CustomErrorCallback;

extern(C)
{
    PxErrorCallback getDefaultErrorCallback();
    PxAllocatorCallback getDefaultAllocatorCallback();
    PxErrorCallback getDErrorCallback( CustomErrorCallback );
    PxFoundation getFoundation( PxU32, PxAllocatorCallback, PxErrorCallback );
    void releaseFoundation( PxFoundation );
    PxProfileZoneManager getProfileZoneManager( PxFoundation );
    void releaseProfileZoneManager( PxProfileZoneManager );
    PxTolerancesScale getTolerancesScale();
    PxPhysics getPhysics( PxU32, PxFoundation, PxTolerancesScale, PxProfileZoneManager );
    void releasePhysics( PxPhysics );

    PxCookingParams getCookingParams( PxTolerancesScale );
    PxCooking getCooking( PxU32, PxFoundation, PxCookingParams );

    bool initExtensions( PxPhysics );
    void closeExtensions();
}
