#include "core_types.h"

void boundedData_setCount( PxBoundedData* bounded_data, PxU32 count )
{ bounded_data->count = count; }

void boundedData_setStride( PxBoundedData* bounded_data, PxU32 stride )
{ bounded_data->stride = stride; }

void boundedData_setData( PxBoundedData* bounded_data, void* data )
{ bounded_data->data = data; }
