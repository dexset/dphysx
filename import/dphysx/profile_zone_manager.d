module dphysx.profile_zone_manager;

import dphysx.foundation;

alias void* PxProfileZoneManager;

extern(C):
    PxProfileZoneManager getProfileZoneManager( PxFoundation );
    void releaseProfileZoneManager( PxProfileZoneManager );
