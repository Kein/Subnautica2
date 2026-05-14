#pragma once
#include "CoreMinimal.h"
#include "UWEPrimaryDataAssetBase.h"
#include "UWEDatabankEntry.generated.h"

class UTexture2D;
class UUWEStoryGoal;
class UUWEStoryGoalRule;

UCLASS()
class UWEDATABANK_API UUWEDatabankEntry : public UUWEPrimaryDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FText> Categories;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText EntryTitle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText EntryText;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> EntryImage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEStoryGoalRule* UnlockingRequirements;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UUWEStoryGoal* HideOnStoryGoal;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bCompletesInvestigation;
    
    UUWEDatabankEntry();

    UFUNCTION(BlueprintPure)
    bool IsUnlocked() const;
    
};

