// Unity Technologies Inc (c) 2018
// ARPointCloud.mm
// Main implementation of ARKit plugin's ARPointCloud

#include "ARKitDefines.h"

#ifdef __cplusplus
extern "C" {
#endif
    
int pointCloud_GetCount(const void* pointCloudPtr)
{
    if (pointCloudPtr == nullptr)
        return 0;
    
    ARPointCloud* pointCloud = (__bridge ARPointCloud*)pointCloudPtr;
    
    return [pointCloud count];
}

void* pointCloud_GetPointsPtr(const void* pointCloudPtr)
{
    if (pointCloudPtr == nullptr)
        return 0;
    
    ARPointCloud* pointCloud = (__bridge ARPointCloud*)pointCloudPtr;
    
    const vector_float3 *pointsPtr = [pointCloud points];
    
    return (void*) pointsPtr;
}


#ifdef __cplusplus
}
#endif

