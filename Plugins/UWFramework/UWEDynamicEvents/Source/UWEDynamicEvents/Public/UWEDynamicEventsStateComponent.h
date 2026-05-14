#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "UWEGenericObjectSaveDataContainer.h"
#include "UWESaveObject.h"
#include "UWEActiveDynamicEvent.h"
#include "UWEActiveDynamicEventArray.h"
#include "UWEDynamicEventGroup.h"
#include "UWEDynamicEventsStateComponent.generated.h"

class APlayerController;
class UUWESaveHandle;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEDYNAMICEVENTS_API UUWEDynamicEventsStateComponent : public UActorComponent, public IUWESaveObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<FUWEDynamicEventGroup> AllEvents;
    
    UPROPERTY(Replicated)
    FUWEActiveDynamicEventArray ReplicatedActiveEvents;
    
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
    UPROPERTY(SaveGame)
    FUWEGenericObjectSaveDataContainer ActiveEventsSaveData;
    
public:
    UUWEDynamicEventsStateComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool TryStartDynamicEventByTag(FGameplayTag EventTag, APlayerController* PlayerController);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool TryStartDynamicEvent(FUWEDynamicEventGroup& DynamicEvent, APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void LogDynamicEvent(const FString& Message, FGameplayTag EventTag);
    
    UFUNCTION(BlueprintPure)
    TArray<FUWEDynamicEventGroup> GetAllEvents() const;
    
    UFUNCTION()
    TArray<FUWEActiveDynamicEvent> GetActiveEvents() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ForceEndEvent(const FGuid& EventID, const FPrimaryAssetId& DynamicEventPrimaryAssetId);
    

    // Fix for true pure virtual functions not being implemented
};

