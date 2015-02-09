#include "physics.h"

PxScene* physics_createScene( PxPhysics* physics, PxSceneDesc* scene_desc )
{ return physics->createScene( *scene_desc ); }

PxRigidDynamic* physics_createRigidDynamic( PxPhysics* physics, PxTransform* transform )
{ physics->createRigidDynamic( *transform ); }

PxPhysicsInsertionCallback* physics_getPhysicsInsertionCallback( PxPhysics* physics )
{ return &( physics->getPhysicsInsertionCallback() ); }

PxConvexMesh* physics_createConvexMesh( PxPhysics* physics, PxDefaultMemoryInputData* input )
{ return physics->createConvexMesh( *input ); }

PxMaterial* physics_getMaterial( PxPhysics* physics, float static_friction, float dynamic_friction, float restitution )
{ return physics->createMaterial( static_friction, dynamic_friction, restitution ); }
