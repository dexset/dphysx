#ifndef __DPHYSX_RIGID__
#define __DPHYSX_RIGID__

#include "PxPhysicsAPI.h"

using namespace physx;

extern "C"
{
    PxShape* rigid_createShape( PxRigidActor*, PxGeometry*, PxMaterial* );
}

#endif
