#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ERequirementScope.h"
#include "UWEUnlockRuleElement.generated.h"

class UUWEPrimaryDataAssetBase;

USTRUCT()
struct FUWEUnlockRuleElement {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGameplayTag EventTrackerVerbTag;
    
    UPROPERTY()
    ERequirementScope RequirementScope;
    
    UPROPERTY()
    int32 RequiredCount;
    
    UPROPERTY()
    UUWEPrimaryDataAssetBase* EventAsset;
    
    UPROPERTY()
    FGameplayTag EventTag;
    
    UWEUNLOCKABLES_API FUWEUnlockRuleElement();
};

