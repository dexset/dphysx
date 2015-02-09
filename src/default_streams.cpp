#include "default_streams.h"

PxDefaultMemoryOutputStream* getDefaultMemoryOutputStream()
{ return new PxDefaultMemoryOutputStream(); }

PxDefaultMemoryInputData* getDefaultMemoryInputData( PxU8* data, PxU32 length )
{ return new PxDefaultMemoryInputData( data, length ); }
