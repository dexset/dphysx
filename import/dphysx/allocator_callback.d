module dphysx.allocator_callback;

alias void* PxAllocatorCallback;

extern(C):
    PxAllocatorCallback getDefaultAllocatorCallback();
