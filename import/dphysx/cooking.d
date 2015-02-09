module dphysx.cooking;

import dphysx.base;
import dphysx.tolerances_scale;
import dphysx.foundation;

alias void* PxCookingParams;
alias void* PxCooking;

extern(C):
    PxCookingParams getCookingParams( PxTolerancesScale );
    PxCooking getCooking( PxU32, PxFoundation, PxCookingParams );
