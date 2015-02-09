#ifndef __DPHYSX_SCENE__
#define __DPHYSX_SCENE__

#include "PxPhysicsAPI.h"

using namespace physx;

extern "C"
{
    PxSceneDesc* getSceneDesc( PxTolerancesScale* );
    void releaseScene( PxScene* );
}

#endif
