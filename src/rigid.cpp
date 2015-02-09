#include "rigid.h"

PxShape* rigid_createShape( PxRigidActor* rigid, PxGeometry* geometry, PxMaterial* material )
{ return rigid->createShape( *geometry, *material ); }
