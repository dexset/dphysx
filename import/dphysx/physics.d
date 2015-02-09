module dphysx.physics;

import dphysx.base;
import dphysx.foundation;
import dphysx.tolerances_scale;
import dphysx.profile_zone_manager;
import dphysx.transform;
import dphysx.rigid;
import dphysx.scene;

alias void* PxPhysics;

extern(C):
    PxPhysics getPhysics( PxU32, PxFoundation, PxTolerancesScale, PxProfileZoneManager );
    void releasePhysics( PxPhysics );
    PxScene physics_createScene( PxPhysics, PxSceneDesc );
    PxRigidDynamic physics_createRigidDynamic( PxPhysics, PxTransform );

