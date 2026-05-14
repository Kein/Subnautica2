#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/TimerHandle.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "UWEDamageTracker.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UWEGAMEPLAY_API UUWEDamageTracker : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    TArray<FGameplayEventData> DamageEvents;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    FGameplayEventData LastDamageEvent;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    FVector LastDamageLocation;
    
    UPROPERTY(Config)
    float FlushIntervalSeconds;
    
private:
    UPROPERTY()
    FTimerHandle FlushDamageEventsHandle;
    
public:
    UUWEDamageTracker(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION()
    void RegisterDamage(const FGameplayEventData& EventData);
    
    UFUNCTION(BlueprintPure)
    FGameplayEventData GetLatestDamageEvent();
    
    UFUNCTION(BlueprintPure)
    FVector GetLastDamageLocation() const;
    
private:
    UFUNCTION()
    void FlushDamageEvents();
    
};

