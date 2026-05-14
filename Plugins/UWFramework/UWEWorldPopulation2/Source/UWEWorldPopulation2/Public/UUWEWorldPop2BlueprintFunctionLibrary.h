#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UWESeededResourceInfo.h"
#include "UWEWorldPop2Query.h"
#include "UUWEWorldPop2BlueprintFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class UWEWORLDPOPULATION2_API UUUWEWorldPop2BlueprintFunctionLibrary : public UObject {
    GENERATED_BODY()
public:
    UUUWEWorldPop2BlueprintFunctionLibrary();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool HasAnyResourcesInCylinderOfLocationFiltered(UObject* WorldContextObject, FVector Location, float HorizontalRadius, float VerticalHalfHeight, const FUWEWorldPop2Query& InFilter);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetNumResourcesInRangeOfLocationFiltered(UObject* WorldContextObject, FVector Location, float Radius, const FUWEWorldPop2Query& InFilter);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetAllResourcesInRangeOfLocationFiltered(UObject* WorldContextObject, FVector Location, float Radius, const FUWEWorldPop2Query& InFilter, TArray<FUWESeededResourceInfo>& OutResources);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetAllResourcesInCylinderOfLocationFiltered(UObject* WorldContextObject, FVector Location, float HorizontalRadius, float VerticalHalfHeight, const FUWEWorldPop2Query& InFilter, TArray<FUWESeededResourceInfo>& OutResources);
    
};

