module dphysx.extensions;

import dphysx.physics;

extern(C):
    bool initExtensions( PxPhysics );
    void closeExtensions();
