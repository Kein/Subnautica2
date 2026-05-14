#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/GameStateBase.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EGameModeAliasAsEnum.h"
#include "OnPlayerStartCompletedDelegate.h"
#include "UWEGameStateBase.generated.h"

class UUWEGameTimeCustomSaveInfo;
class UUWESaveHandle;

UCLASS()
class UWEGAMEPLAY_API AUWEGameStateBase : public AGameStateBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGlobalTagsChangedDelegate, const FGameplayTag&, GameplayTag);
    
    UPROPERTY(BlueprintAssignable)
    FOnPlayerStartCompleted OnPlayerStartCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FGlobalTagsChangedDelegate OnGlobalTagAdded;
    
    UPROPERTY(BlueprintAssignable)
    FGlobalTagsChangedDelegate OnGlobalTagRemoved;
    
protected:
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere, ReplicatedUsing=OnRep_GlobalGameplayTags)
    FGameplayTagContainer GlobalGameplayTags;
    
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
    UPROPERTY()
    UUWEGameTimeCustomSaveInfo* GameTimeCustomSaveInfo;
    
    UPROPERTY(SaveGame)
    TMap<int32, FTransform> StoredPlayerTransforms;
    
    UPROPERTY(Replicated)
    FString CurrentGameModeAlias;
    
    UPROPERTY(VisibleAnywhere)
    bool bPlayerTransformsLocked;
    
public:
    AUWEGameStateBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetPlayerTransformsLocked(bool bLocked);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGlobalTag(const FGameplayTag Tag);
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void PlayerStartCompletedHandler(int32 PlayerId);
    
public:
    UFUNCTION(BlueprintCallable)
    void OverwritePlayerTransforms(const FTransform& Transform);
    
protected:
    UFUNCTION()
    void OnRep_GlobalGameplayTags(FGameplayTagContainer& OldGlobalGameplayTags);
    
public:
    UFUNCTION(BlueprintPure)
    FGameplayTagContainer GetGlobalTags() const;
    
    UFUNCTION(BlueprintPure)
    EGameModeAliasAsEnum GetGameModeType() const;
    
    UFUNCTION(BlueprintPure)
    FString GetGameModeAlias() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnGlobalTagRemoved(const FGameplayTag Tag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnGlobalTagAdded(const FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable)
    void AddGlobalTag(const FGameplayTag Tag);
    
};

