#ifndef __DPHYSX_PHYSICS__
#define __DPHYSX_PHYSICS__

#include "PxPhysicsAPI.h"

using namespace physx;

extern "C"
{
    PxScene* physics_createScene( PxPhysics*, PxSceneDesc* );
}

#endif
