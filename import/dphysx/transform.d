import dphysx.transform;

alias void* PxTransform;
alias void* PxVec3;

extern(C)
{
    PxTransform getTransform_P( PxVec3 );
    PxTransform getTransform_R( float, PxVec3 );//PxQuat
    PxTransform getTransform_PR( PxVec3, float, PxVec3 );//PxVec3, PxQuat
}
