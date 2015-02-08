#ifndef __DPHYSX_BASE__
#define __DPHYSX_BASE__

#include <stdio.h>
#include <exception>
#include <cassert>
#include "PxPhysicsAPI.h"
#include "extensions/PxDefaultErrorCallback.h"

using namespace physx;

typedef void (*CustomErrorCallback)( PxErrorCode::Enum code, const char* message, const char* file, int line );

class DPxErrorCallback : public PxErrorCallback
{
private:
    CustomErrorCallback report_error_callback;

public:
    DPxErrorCallback( CustomErrorCallback );
    void reportError( PxErrorCode::Enum, const char*, const char*, int );

    ~DPxErrorCallback();
};

extern "C"
{
    PxDefaultErrorCallback* getDefaultErrorCallback();
    PxDefaultAllocator* getDefaultAllocatorCallback();
    DPxErrorCallback* getDErrorCallback( CustomErrorCallback );

    PxFoundation* getFoundation( PxU32, PxAllocatorCallback*, PxErrorCallback* );
    void releaseFoundation( PxFoundation* );

    PxProfileZoneManager* getProfileZoneManager( PxFoundation* );
    void releaseProfileZoneManager( PxProfileZoneManager* );

    PxTolerancesScale* getTolerancesScale();

    PxPhysics* getPhysics( PxU32, PxFoundation*, PxTolerancesScale*, bool, PxProfileZoneManager* );
    void releasePhysics( PxPhysics* );

    PxCookingParams* getCookingParams( PxTolerancesScale* );
    PxCooking* getCooking( PxU32, PxFoundation*, PxCookingParams* );

    bool initExtensions( PxPhysics* );
    void closeExtensions();
}

#endif
