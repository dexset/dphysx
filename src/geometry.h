#ifndef __DPHYSX_GEOMETRY__
#define __DPHYSX_GEOMETRY__

#include "PxPhysicsAPI.h"

using namespace physx;

extern "C"
{
    PxMeshScale* getMeshScale();
    PxMeshScale* getMeshScale_f( float );
    PxMeshScale* getMeshScale_vq( PxVec3*, float, PxVec3* );//PxVec, PxQuat

    PxMeshGeometryFlags* getMeshGeometryFlags();

    PxCapsuleGeometry* getCapsuleGeometry( float, float );
    PxBoxGeometry* getBoxGeometry( float, float, float );
    PxPlaneGeometry* getPlaneGeometry();
    PxConvexMeshGeometry* getConvexMeshGeometry( PxConvexMesh*, PxMeshScale* );
    PxHeightFieldGeometry* getHeightFieldGeometry( PxHeightField*, PxMeshGeometryFlags*, float, float, float );
    PxTriangleMeshGeometry* getTriangleMeshGeometry( PxTriangleMesh*, PxMeshScale*, PxMeshGeometryFlags* );
}

#endif
