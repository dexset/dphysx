#include "geometry.h"

PxMeshScale* getMeshScale()
{ return new PxMeshScale(); }

PxMeshScale* getMeshScale_f( float r )
{ return new PxMeshScale( r ); }

PxMeshScale* getMeshScale_vq( PxVec3* s, float angle, PxVec3* axis )
{ return new PxMeshScale( *s, PxQuat( angle, *axis ) ); }

PxMeshGeometryFlags* getMeshGeometryFlags()
{ return new PxMeshGeometryFlags(); }

PxCapsuleGeometry* getCapsuleGeometry( float radius, float half_height )
{ return new PxCapsuleGeometry( radius, half_height ); }

PxBoxGeometry* getBoxGeometry( float x, float y, float z )
{ return new PxBoxGeometry( x, y, z ); }

PxPlaneGeometry* getPlaneGeometry()
{ return new PxPlaneGeometry(); }

PxConvexMeshGeometry* getConvexMeshGeometry( PxConvexMesh* convex_mesh, PxMeshScale* scale )
{ return new PxConvexMeshGeometry( convex_mesh, *scale ); }

PxHeightFieldGeometry* getHeightFieldGeometry( PxHeightField* height_field, PxMeshGeometryFlags* flags, float height_scale, float row_scale, float column_scale )
{ return new PxHeightFieldGeometry( height_field, *flags, height_scale, row_scale, column_scale ); }

PxTriangleMeshGeometry* getTriangleMeshGeometry( PxTriangleMesh* triangle_mesh, PxMeshScale* scale, PxMeshGeometryFlags* flags )
{ return new PxTriangleMeshGeometry( triangle_mesh, *scale, *flags ); }
