#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ShowLockedBiomodsEventTrackerRequirement.generated.h"

class UUWEPrimaryDataAssetBase;

USTRUCT(BlueprintType)
struct FShowLockedBiomodsEventTrackerRequirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UUWEPrimaryDataAssetBase* DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag EventTrackerVerb;
    
    UWEBIOMODS_API FShowLockedBiomodsEventTrackerRequirement();
};

