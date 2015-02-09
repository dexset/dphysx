#include "transform.h"

PxTransform* getTransform_P( PxVec3* position )
{ return new PxTransform( *position ); }

PxTransform* getTransform_R( float angle, PxVec3* axis )
{ return new PxTransform( PxQuat( angle, *axis ) ); }

PxTransform* getTransform_PR( PxVec3* position, float angle, PxVec3* axis )
{ return new PxTransform( *position, PxQuat( angle, *axis ) ); }
