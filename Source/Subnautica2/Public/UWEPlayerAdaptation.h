#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "UWEPlayerAdaptation.generated.h"

class UTexture2D;
class UUWEStoryGoal;

USTRUCT(BlueprintType)
struct FUWEPlayerAdaptation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag AdaptationTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText AdaptationMissingDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftObjectPtr<UUWEStoryGoal>> StoryGoalsToUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsDescriptionVisibleByDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer GameplayEffectsToRemoveOnAdapt;
    
    SUBNAUTICA2_API FUWEPlayerAdaptation();
};

