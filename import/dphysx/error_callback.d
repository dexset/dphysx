module dphysx.error_callback;

import dphysx.base;

alias void* PxErrorCallback;

alias void function( PxErrorCode, const char*, const char*, int ) CustomErrorCallback;

extern(C):
    PxErrorCallback getDefaultErrorCallback();
    PxErrorCallback getDErrorCallback( CustomErrorCallback );
