#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SN2SubmarineStation.h"
#include "SN2SubmarineAlertLight.generated.h"

class USN2SubmarineAlert;

UCLASS()
class SUBNAUTICA2_API ASN2SubmarineAlertLight : public ASN2SubmarineStation {
    GENERATED_BODY()
public:
    ASN2SubmarineAlertLight(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintPure)
    bool ShouldPlayAlarmLights() const;
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void PlayWarning();
    
private:
    UFUNCTION()
    void OnRedAlertTagChanged(FGameplayTag GameplayTag, int32 TagCount);
    
    UFUNCTION()
    void OnNewAlertPlayed(USN2SubmarineAlert* NewAlert);
    
    UFUNCTION()
    void OnBlockAlertTagChanged(FGameplayTag GameplayTag, int32 TagCount);
    
protected:
    UFUNCTION(BlueprintPure)
    bool IsRedAlert() const;
    
};

