#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEPlayerStart.h"
#include "SN2PlayerStartTriggerHandling.h"
#include "SN2PlayerStart.generated.h"

class AController;
class APawn;
class IUWEUnlockableAsset;
class UUWEUnlockableAsset;
class UGameplayEffect;
class UUWEItemType;
class UUWEStoryGoal;

UCLASS()
class SUBNAUTICA2_API ASN2PlayerStart : public AUWEPlayerStart {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UUWEStoryGoal>> PlayerStoryGoals;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer UnlockStoryGroups;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UUWEItemType>> InventoryItems;
    
    UPROPERTY(EditAnywhere)
    TArray<TScriptInterface<IUWEUnlockableAsset>> UnlockableAssets;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UUWEItemType>> EquippedItems;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer GlobalTags;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer GrantTags;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer RemoveTags;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftClassPtr<UGameplayEffect>> AppliedEffects;
    
    UPROPERTY(EditAnywhere)
    bool bUnfreezeTimeOfDay;
    
    UPROPERTY(EditAnywhere)
    bool bSetTimeOfDay;
    
    UPROPERTY(EditAnywhere)
    bool bShouldSuppressAllNotifications;
    
    UPROPERTY(EditAnywhere)
    bool bShouldSkipAllQueuedDialogue;
    
    UPROPERTY(EditAnywhere)
    float SecondsToSuppressMessages;
    
    UPROPERTY(EditAnywhere)
    float TimeOfDay;
    
    UPROPERTY(EditAnywhere)
    bool bSetGameTime;
    
    UPROPERTY(EditAnywhere)
    float GameTime;
    
    UPROPERTY(EditAnywhere)
    TArray<FSN2PlayerStartTriggerHandling> TriggerHandlings;
    
    ASN2PlayerStart(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintNativeEvent)
    void OnPreSpawnReady(AController* Player);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnMessagingSuppressCompleted(APawn* PlayerPawn);
    
};

