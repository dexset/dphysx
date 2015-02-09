#ifndef __DPHYSX_COOKING__
#define __DPHYSX_COOKING__

#include "PxPhysicsAPI.h"

using namespace physx;

extern "C"
{
    bool cooking_cookConvexMesh( PxCooking*, PxConvexMeshDesc*, PxDefaultMemoryOutputStream*, PxConvexMeshCookingResult::Enum* ); 
    PxHeightField* cooking_createHeightField( PxCooking*, PxHeightFieldDesc*, PxPhysicsInsertionCallback* );
    PxTriangleMesh* cooking_createTriangleMesh( PxCooking*, PxTriangleMeshDesc*, PxPhysicsInsertionCallback* );
}

#endif
