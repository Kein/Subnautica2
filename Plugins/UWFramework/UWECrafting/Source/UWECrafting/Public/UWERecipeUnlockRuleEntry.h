#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ERequirementScope.h"
#include "ERecipeEventTypes.h"
#include "UWERecipeUnlockRuleEntry.generated.h"

class UUWEPrimaryDataAssetBase;

USTRUCT(BlueprintType)
struct FUWERecipeUnlockRuleEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ERecipeEventTypes EventType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag EventTrackerVerbTag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ERequirementScope RequirementScope;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RequiredCount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UUWEPrimaryDataAssetBase* EventAsset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag EventTag;
    
    UWECRAFTING_API FUWERecipeUnlockRuleEntry();
};

