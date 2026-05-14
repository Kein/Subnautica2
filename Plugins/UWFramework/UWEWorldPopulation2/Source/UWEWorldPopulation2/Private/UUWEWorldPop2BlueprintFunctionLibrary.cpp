#include "UUWEWorldPop2BlueprintFunctionLibrary.h"

UUUWEWorldPop2BlueprintFunctionLibrary::UUUWEWorldPop2BlueprintFunctionLibrary() {
}

bool UUUWEWorldPop2BlueprintFunctionLibrary::HasAnyResourcesInCylinderOfLocationFiltered(UObject* WorldContextObject, FVector Location, float HorizontalRadius, float VerticalHalfHeight, const FUWEWorldPop2Query& InFilter) {
    return false;
}

int32 UUUWEWorldPop2BlueprintFunctionLibrary::GetNumResourcesInRangeOfLocationFiltered(UObject* WorldContextObject, FVector Location, float Radius, const FUWEWorldPop2Query& InFilter) {
    return 0;
}

void UUUWEWorldPop2BlueprintFunctionLibrary::GetAllResourcesInRangeOfLocationFiltered(UObject* WorldContextObject, FVector Location, float Radius, const FUWEWorldPop2Query& InFilter, TArray<FUWESeededResourceInfo>& OutResources) {
}

void UUUWEWorldPop2BlueprintFunctionLibrary::GetAllResourcesInCylinderOfLocationFiltered(UObject* WorldContextObject, FVector Location, float HorizontalRadius, float VerticalHalfHeight, const FUWEWorldPop2Query& InFilter, TArray<FUWESeededResourceInfo>& OutResources) {
}


