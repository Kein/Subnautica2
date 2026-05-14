#pragma once
#include "CoreMinimal.h"
#include "UWEDataAssetInfoInterface.h"
#include "UWEPrimaryDataAssetBase.h"
#include "EUnlockState.h"
#include "UWEUnlockNotificationPackage.h"
#include "UWEUnlockableAsset.h"
#include "UWEBioScanData.generated.h"

class APlayerState;
class UTexture2D;
class UUWEDialogueStoryEvent;

UCLASS()
class UWEBIOMODS_API UUWEBioScanData : public UUWEPrimaryDataAssetBase, public IUWEDataAssetInfoInterface, public IUWEUnlockableAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText BioScanName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Thumbnail;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EUnlockState DefaultUnlockState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    TSoftObjectPtr<UUWEDialogueStoryEvent> UnlockDialogue;
    
    UUWEBioScanData();

    UFUNCTION(BlueprintPure)
    EUnlockState GetUnlockState(APlayerState* PlayerState);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    FUWEUnlockNotificationPackage GetNotificationPackage() override PURE_VIRTUAL(GetNotificationPackage, return FUWEUnlockNotificationPackage{};);
    
};

