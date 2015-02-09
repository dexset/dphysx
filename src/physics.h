#ifndef __DPHYSX_PHYSICS__
#define __DPHYSX_PHYSICS__

#include "PxPhysicsAPI.h"

using namespace physx;

extern "C"
{
    PxScene* physics_createScene( PxPhysics*, PxSceneDesc* );
    PxRigidDynamic* physics_createRigidDynamic( PxPhysics*, PxTransform* );

    PxConvexMesh* physics_createConvexMesh( PxPhysics*, PxDefaultMemoryInputData* );

    PxPhysicsInsertionCallback* physics_getPhysicsInsertionCallback( PxPhysics* );

    PxMaterial* physics_getMaterial( PxPhysics*, float, float, float );
}

#endif
