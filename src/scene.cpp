#include "scene.h"

PxSceneDesc* getSceneDesc( PxTolerancesScale* tolerances_scale )
{ return new PxSceneDesc( *tolerances_scale ); }

void releaseScene( PxScene* scene )
{ scene->release(); }

void scene_addActor( PxScene* scene, PxRigidActor* actor )
{ scene->addActor( *actor ); }
