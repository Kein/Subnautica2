#pragma once
#include "CoreMinimal.h"
#include "Engine/TimerHandle.h"
#include "MVVMViewModelBase.h"
#include "UWETargetActor.h"
#include "UWEScanTrait.h"
#include "SN2ScannerTargetViewModel.generated.h"

class AActor;
class AUWEBaseItem;
class UObject;
class UTexture2D;
class UUWEScanData;
class UUWEScannedActorsComponent;

UCLASS()
class SUBNAUTICA2_API USN2ScannerTargetViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    FText ScanTargetName;
    
    UPROPERTY(BlueprintReadWrite)
    float ScanAmount;
    
    UPROPERTY(BlueprintReadWrite)
    int32 NumScanned;
    
    UPROPERTY(BlueprintReadWrite)
    int32 NumRequired;
    
    UPROPERTY(BlueprintReadWrite)
    bool TargetHasBeenScannedBefore;
    
    UPROPERTY(BlueprintReadWrite)
    bool ScanFullyComplete;
    
    UPROPERTY(BlueprintReadWrite)
    bool ScanCompleteForPlayer;
    
    UPROPERTY(BlueprintReadWrite)
    TSoftObjectPtr<UTexture2D> ScanTargetTexture;
    
    UPROPERTY(BlueprintReadWrite)
    bool bHasValidScanTarget;
    
    UPROPERTY(BlueprintReadWrite)
    bool bScanTargetTooFar;
    
    UPROPERTY(BlueprintReadWrite)
    bool ScanDataFullyScanned;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FUWEScanTrait> UnlockedScanTraits;
    
    UPROPERTY(BlueprintReadWrite)
    AActor* ScanTargetActor;
    
    UPROPERTY()
    FTimerHandle ReCheckHoverTargetTimerHandle;
    
private:
    UPROPERTY()
    UObject* WorldContextObject;
    
    UPROPERTY(Instanced)
    UUWEScannedActorsComponent* ScannerComp;
    
    UPROPERTY()
    FUWETargetActor CurrentOldHoverTarget;
    
    UPROPERTY()
    FUWETargetActor CurrentNewHoverTarget;
    
public:
    USN2ScannerTargetViewModel();

private:
    UFUNCTION()
    void ReCheckHoverTargetDistance();
    
    UFUNCTION()
    void OnScanProgressChanged(AActor* ScannedActor, float Progress);
    
    UFUNCTION()
    void OnScannableScanned(UUWEScanData* ScanData, int32 GlobalProgress);
    
    UFUNCTION()
    void OnLocalClientReady();
    
    UFUNCTION()
    void OnHoverTargetChanged(FUWETargetActor OldHoverTarget, FUWETargetActor NewHoverTarget);
    
    UFUNCTION()
    void OnEquipmentChanged(AUWEBaseItem* OldTool, AUWEBaseItem* NewTool, bool bIsFirstTimeEquipped);
    
public:
    UFUNCTION(meta=(WorldContext="WorldContext"))
    void Initialize(UObject* WorldContext);
    
};

