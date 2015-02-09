#ifndef __DPHYSX_CONVEX_MESH__
#define __DPHYSX_CONVEX_MESH__

#include "PxPhysicsAPI.h"

using namespace physx;

extern "C"
{
    PxConvexMeshDesc* getConvexMeshDesc();

    PxBoundedData* convexMeshDesc_getPoints( PxConvexMeshDesc* );
    PxBoundedData* convexMeshDesc_getTriangles( PxConvexMeshDesc* );
    PxBoundedData* convexMeshDesc_getPolygons( PxConvexMeshDesc* );
    PxBoundedData* convexMeshDesc_getIndices( PxConvexMeshDesc* );
    PxConvexFlags* convexMeshDesc_getFlags( PxConvexMeshDesc* );
    PxU16 convexMeshDesc_getVertexLimit( PxConvexMeshDesc* );
}

#endif
