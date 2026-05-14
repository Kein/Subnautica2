#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "UWEActorDataAsset.h"
#include "UWEDataAssetInfoInterface.h"
#include "UWEDataAssetPartialProgressInterface.h"
#include "EScanObjectType.h"
#include "ESharedScanProgressOverrides.h"
#include "UWEScanDataExtraStoryGoals.h"
#include "UWEScanDataExtraUnlock.h"
#include "UWEScanHologram.h"
#include "UWEScanMeshOverride.h"
#include "UWEScanStep.h"
#include "UWEScanData.generated.h"

class AActor;
class UActorComponent;
class UTexture2D;
class UUWEItemType;
class UUWEScanData;
class UUWEStoryGoal;

UCLASS(EditInlineNew)
class UWESCANNER_API UUWEScanData : public UUWEActorDataAsset, public IUWEDataAssetInfoInterface, public IUWEDataAssetPartialProgressInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText Name;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> Thumbnail;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ScanDuration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 NumRequired;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bPinnablePartialScanProgress;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ESharedScanProgressOverrides ProgressSharedOverride;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FGameplayTag, int32> CurrencyRewards;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<TSoftObjectPtr<UUWEItemType>, int32> ConsolationItemPrize;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditDefaultsOnly)
    bool bShowNameWhenHovered;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagQuery RequiredTagsToScanQuery;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EScanObjectType ScanObjectType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FUWEScanHologram HologramParticleEffectData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FUWEScanMeshOverride ScanMeshOverride;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<UUWEStoryGoal*> UnlockedStoryGoalsRef;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FUWEScanStep> ScanSteps;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FUWEScanDataExtraUnlock> ExtraUnlocks;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FUWEScanDataExtraStoryGoals> ExtraStoryGoals;
    
    UUWEScanData();

    UFUNCTION(BlueprintPure)
    static UUWEScanData* GetScanDataForComponent(UActorComponent* ActorComponent);
    
    UFUNCTION(BlueprintPure)
    static UUWEScanData* GetScanDataForActor(const AActor* Actor);
    

    // Fix for true pure virtual functions not being implemented
};

