#include "cooking.h"

PxHeightField* cooking_createHeightField( PxCooking* cooking, PxHeightFieldDesc* height_field_desc, PxPhysicsInsertionCallback* physics_insertion_callback )
{ return cooking->createHeightField( *height_field_desc, *physics_insertion_callback ); }

PxTriangleMesh* cooking_createTriangleMesh( PxCooking* cooking, PxTriangleMeshDesc* triangle_mesh_desc, PxPhysicsInsertionCallback* physics_insertion_callback )
{ return cooking->createTriangleMesh( *triangle_mesh_desc, *physics_insertion_callback ); }

bool cooking_cookConvexMesh( PxCooking* cooking, PxConvexMeshDesc* convex_mesh_desc, PxDefaultMemoryOutputStream* buffer, PxConvexMeshCookingResult::Enum* result )
{ return cooking->cookConvexMesh( *convex_mesh_desc, *buffer, result ); }
