#include "scene.h"

PxSceneDesc* getSceneDesc( PxTolerancesScale* tolerances_scale )
{ return new PxSceneDesc( *tolerances_scale ); }
