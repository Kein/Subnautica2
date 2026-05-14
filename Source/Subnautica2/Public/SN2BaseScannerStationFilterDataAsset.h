#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEPrimaryDataAssetBase.h"
#include "UWERecipeUnlockRuleEntry.h"
#include "EUnlockState.h"
#include "UWEUnlockNotificationPackage.h"
#include "UWEUnlockableAsset.h"
#include "SN2BaseScannerStationFilterDataAsset.generated.h"

class AActor;
class UTexture2D;
class UUWEDialogueStoryEvent;

UCLASS()
class SUBNAUTICA2_API USN2BaseScannerStationFilterDataAsset : public UUWEPrimaryDataAssetBase, public IUWEUnlockableAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Thumbnail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 OrderingIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftClassPtr<AActor>> WorldPopResourcesToFind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag ScannerStationSignalTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EUnlockState DefaultUnlockState;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bNotifyOnUnlock;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FUWERecipeUnlockRuleEntry UnlockRule;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEDialogueStoryEvent* UnlockTriggeredDialogue;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditDefaultsOnly)
    FText UnlockNotificationOverride;
    
    USN2BaseScannerStationFilterDataAsset();


    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    FUWEUnlockNotificationPackage GetNotificationPackage() override PURE_VIRTUAL(GetNotificationPackage, return FUWEUnlockNotificationPackage{};);
    
};

