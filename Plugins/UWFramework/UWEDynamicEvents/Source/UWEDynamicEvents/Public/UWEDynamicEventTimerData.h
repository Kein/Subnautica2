#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "UWEPrimaryDataAssetBase.h"
#include "UWEDynamicEventTimerData.generated.h"

UCLASS()
class UWEDYNAMICEVENTS_API UUWEDynamicEventTimerData : public UUWEPrimaryDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FGameplayTag IdentifierTag;
    
    UPROPERTY(EditDefaultsOnly)
    bool StartEnabled;
    
    UPROPERTY(EditDefaultsOnly)
    float IntervalTimeSeconds;
    
    UPROPERTY(EditDefaultsOnly)
    FText TimerName;
    
    UPROPERTY(EditDefaultsOnly)
    FText TimerDescription;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer PossibleEventsToSpawn;
    
    UUWEDynamicEventTimerData();

};

