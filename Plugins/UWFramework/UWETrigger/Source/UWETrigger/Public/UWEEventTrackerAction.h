#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEPlayerTriggerAction.h"
#include "UWEEventTrackerAction.generated.h"

class UUWEPrimaryDataAssetBase;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWETRIGGER_API UUWEEventTrackerAction : public UUWEPlayerTriggerAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UUWEPrimaryDataAssetBase> DataAsset;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag Verb;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag NotifyTag;
    
public:
    UUWEEventTrackerAction(const FObjectInitializer& ObjectInitializer);

};

