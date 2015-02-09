#include "physics.h"

PxScene* physics_createScene( PxPhysics* physics, PxSceneDesc* scene_desc )
{ return physics->createScene( *scene_desc ); }
