#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEPrimaryDataAssetBase.h"
#include "UWESplineWaterCurrentTierSettings.generated.h"

UCLASS(EditInlineNew)
class UWEWATERCURRENTS_API UUWESplineWaterCurrentTierSettings : public UUWEPrimaryDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BaseSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer IgnoreObjectsWithGameplayTags;
    
    UUWESplineWaterCurrentTierSettings();

};

