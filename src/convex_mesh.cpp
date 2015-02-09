#include "convex_mesh.h"

PxConvexMeshDesc* getConvexMeshDesc()
{ return new PxConvexMeshDesc(); }

PxBoundedData* convexMeshDesc_getPoints( PxConvexMeshDesc* mesh_desc )
{ return &( mesh_desc->points ); }

PxBoundedData* convexMeshDesc_getTriangles( PxConvexMeshDesc* mesh_desc )
{ return &( mesh_desc->triangles ); }

PxBoundedData* convexMeshDesc_getPolygons( PxConvexMeshDesc* mesh_desc )
{ return &( mesh_desc->polygons ); }

PxBoundedData* convexMeshDesc_getIndices( PxConvexMeshDesc* mesh_desc )
{ return &( mesh_desc->indices ); }

PxConvexFlags* convexMeshDesc_getFlags( PxConvexMeshDesc* mesh_desc )
{ return &( mesh_desc->flags ); }

PxU16 convexMeshDesc_getVertexLimit( PxConvexMeshDesc* mesh_desc )
{ return mesh_desc->vertexLimit; }
