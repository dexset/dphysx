module dphysx.scene;

import dphysx.base;
import dphysx.tolerances_scale;

alias void* PxSceneDesc;
alias void* PxScene;

extern(C)
{
    PxSceneDesc getSceneDesc( PxTolerancesScale );
}
