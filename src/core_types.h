#ifndef __DPHYSX_CORE_TYPES__
#define __DPHYSX_CORE_TYPES__

#include "PxPhysicsAPI.h"

using namespace physx;

extern "C"
{
    void boundedData_setCount( PxBoundedData*, PxU32 );
    void boundedData_setStride( PxBoundedData*, PxU32 );
    void boundedData_setData( PxBoundedData*, void* );
}

#endif
