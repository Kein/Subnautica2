#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "UWESaveObject.h"
#include "OnEventTrackerEventDelegate.h"
#include "UWEEventArray.h"
#include "UWEEventKey.h"
#include "UWEEventTrackerComponent.generated.h"

class UUWEPrimaryDataAssetBase;
class UUWESaveHandle;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEEVENTTRACKER_API UUWEEventTrackerComponent : public UActorComponent, public IUWESaveObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated)
    FUWEEventArray ReplicatedEntries;
    
    UPROPERTY(SaveGame)
    FUWEEventArray Entries;
    
    UPROPERTY(SaveGame)
    TArray<FString> KeysMirroredForSave;
    
    UPROPERTY(SaveGame)
    TArray<int32> ValuesMirroredForSave;
    
    UPROPERTY()
    TMap<FUWEEventKey, int32> EventValues;
    
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
public:
    UUWEEventTrackerComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UnregisterListenerVerb(FGameplayTag Verb, const FOnEventTrackerEvent& OnTriggeredEvent);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterListenerAsset(FGameplayTag Verb, UUWEPrimaryDataAssetBase* Asset, const FOnEventTrackerEvent& OnTriggeredEvent);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterListener(FGameplayTag Verb, FGameplayTag Tag, const FOnEventTrackerEvent& OnTriggeredEvent);
    
protected:
    UFUNCTION()
    void StoreToSaveHandle();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerNotifyAssetId(FGameplayTag Verb, FPrimaryAssetId AssetId, int32 Value);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerNotifyAsset(FGameplayTag Verb, UUWEPrimaryDataAssetBase* Asset, int32 Value);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerNotify(FGameplayTag Verb, FGameplayTag Tag, int32 Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void RegisterListenerVerb(FGameplayTag Verb, const FOnEventTrackerEvent& OnTriggeredEvent);
    
    UFUNCTION(BlueprintCallable)
    void RegisterListenerAsset(FGameplayTag Verb, UUWEPrimaryDataAssetBase* Asset, const FOnEventTrackerEvent& OnTriggeredEvent);
    
    UFUNCTION(BlueprintCallable)
    void RegisterListener(FGameplayTag Verb, FGameplayTag Tag, const FOnEventTrackerEvent& OnTriggeredEvent);
    
    UFUNCTION(BlueprintCallable)
    void NotifyAssetId(FGameplayTag Verb, FPrimaryAssetId AssetId, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void NotifyAsset(FGameplayTag Verb, const UUWEPrimaryDataAssetBase* Asset, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void Notify(FGameplayTag Verb, FGameplayTag Tag, int32 Value);
    
    UFUNCTION(BlueprintPure)
    int32 GetValueVerb(FGameplayTag Verb) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetValueAsset(FGameplayTag Verb, const UUWEPrimaryDataAssetBase* Asset);
    
    UFUNCTION(BlueprintPure)
    int32 GetValue(FGameplayTag Verb, FGameplayTag Tag);
    

    // Fix for true pure virtual functions not being implemented
};

