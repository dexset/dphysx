#include "base.h"

DPxErrorCallback::DPxErrorCallback( CustomErrorCallback _report_error_callback )
{
    assert( _report_error_callback != NULL );
    report_error_callback = _report_error_callback;
}

void DPxErrorCallback::reportError( PxErrorCode::Enum code, const char* file, const char* message, int line )
{ report_error_callback( code, file, message, line ); }

PxDefaultErrorCallback* getDefaultErrorCallback()
{ return new PxDefaultErrorCallback(); }

PxDefaultAllocator* getDefaultAllocatorCallback()
{ return new PxDefaultAllocator(); }

DPxErrorCallback* getDErrorCallback( CustomErrorCallback report_error_callback )
{ return new DPxErrorCallback( report_error_callback ); }

PxFoundation* getFoundation( PxU32 version, PxAllocatorCallback* allocator_callback, PxErrorCallback* error_callback )
{ return PxCreateFoundation( version, *allocator_callback, *error_callback ); }

void releaseFoundation( PxFoundation* foundation )
{ foundation->release(); }

PxProfileZoneManager* getProfileZoneManager( PxFoundation* foundation )
{ return &PxProfileZoneManager::createProfileZoneManager( foundation ); }

void releaseProfileZoneManager( PxProfileZoneManager* profile_zone_manager )
{ profile_zone_manager->release(); }

PxTolerancesScale* getTolerancesScale()
{ return new PxTolerancesScale(); }

PxPhysics* getPhysics( PxU32 version, PxFoundation* foundation, PxTolerancesScale* tolerances_scale, bool record_memory_allocations, PxProfileZoneManager* profile_zone_manager )
{ return PxCreatePhysics( version, *foundation, *tolerances_scale, record_memory_allocations, profile_zone_manager ); }

void releasePhysics( PxPhysics* physics )
{ physics->release(); }

PxCookingParams* getCookingParams( PxTolerancesScale* tolerances_scale )
{ return new PxCookingParams( *tolerances_scale ); }

PxCooking* getCooking( PxU32 version, PxFoundation* foundation, PxCookingParams* cooking_params )
{ return PxCreateCooking( version, *foundation, *cooking_params ); }

bool initExtensions( PxPhysics* physics )
{ return PxInitExtensions( *physics ); }

void closeExtensions()
{ PxCloseExtensions(); }
