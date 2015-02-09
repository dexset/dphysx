#ifndef __DPHYSX_TRIANGLE_MESH__
#define __DPHYSX_TRIANGLE_MESH__

#include "PxPhysicsAPI.h"

using namespace physx;

extern "C"
{
    PxTriangleMeshDesc* getTriangleMeshDesc();

    PxBoundedData* triangleMeshDesc_getPoints( PxTriangleMeshDesc* );
    PxBoundedData* triangleMeshDesc_getTriangles( PxTriangleMeshDesc* );
    PxMeshFlags* triangleMeshDesc_getFlags( PxTriangleMeshDesc* );
}

#endif
