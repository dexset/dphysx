#include "triangle_mesh.h"

PxTriangleMeshDesc* getTriangleMeshDesc()
{ return new PxTriangleMeshDesc(); }

PxBoundedData* triangleMeshDesc_getPoints( PxTriangleMeshDesc* mesh_desc )
{ return &( mesh_desc->points ); }
PxBoundedData* triangleMeshDesc_getTriangles( PxTriangleMeshDesc* mesh_desc )
{ return &( mesh_desc->triangles ); }
PxMeshFlags* triangleMeshDesc_getFlags( PxTriangleMeshDesc* mesh_desc )
{ return &( mesh_desc->flags ); }
