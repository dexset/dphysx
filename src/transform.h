#ifndef __DPHYSX_TRANFORM__
#define __DPHYSX_TRANFORM__

#include "PxPhysicsAPI.h"

using namespace physx;

extern "C"
{
    PxTransform* getTransform_P( PxVec3* );
    PxTransform* getTransform_R( float, PxVec3* );//PxQuat
    PxTransform* getTransform_PR( PxVec3*, float, PxVec3* );//PxVec3, PxQuat
}

#endif
