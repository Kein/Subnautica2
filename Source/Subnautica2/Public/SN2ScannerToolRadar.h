#pragma once
#include "CoreMinimal.h"
#include "SN2RadarDisplay.h"
#include "UWEScannableActorReason.h"
#include "SN2ScannerToolRadar.generated.h"

class AActor;

UCLASS(EditInlineNew)
class SUBNAUTICA2_API USN2ScannerToolRadar : public USN2RadarDisplay {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<AActor*> ActorsWithScanData;
    
    UPROPERTY()
    TSet<TWeakObjectPtr<AActor>> ActorsWithoutScanData;
    
    UPROPERTY()
    TArray<FUWEScannableActorReason> ScannableActors;
    
public:
    USN2ScannerToolRadar();

    UFUNCTION(BlueprintCallable)
    void UpdateScannerRadar();
    
    UFUNCTION(BlueprintCallable)
    void StopSceneQuery();
    
    UFUNCTION(BlueprintCallable)
    void StartSceneQuery();
    
protected:
    UFUNCTION()
    void StartOverlapQuery();
    
};

