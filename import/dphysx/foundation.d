module dphysx.foundation;

import dphysx.base;
import dphysx.error_callback;
import dphysx.allocator_callback;

alias void* PxFoundation;

extern(C):
    PxFoundation getFoundation( PxU32, PxAllocatorCallback, PxErrorCallback );
    void releaseFoundation( PxFoundation );
