#ifndef __DPHYSX_DEFAULT_STREAMS__
#define __DPHYSX_DEFAULT_STREAMS__

#include "PxPhysicsAPI.h"

using namespace physx;

extern "C"
{
    PxDefaultMemoryOutputStream* getDefaultMemoryOutputStream();
    PxDefaultMemoryInputData* getDefaultMemoryInputData( PxU8*, PxU32 );
}

#endif
