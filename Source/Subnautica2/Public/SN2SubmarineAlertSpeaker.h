#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SN2SubmarineStation.h"
#include "SN2SubmarineAlertSpeaker.generated.h"

class UFMODAudioComponent;
class UFMODEvent;
class USN2SubmarineAlert;

UCLASS()
class SUBNAUTICA2_API ASN2SubmarineAlertSpeaker : public ASN2SubmarineStation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Instanced)
    UFMODAudioComponent* AlertSpeakerPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Instanced)
    UFMODAudioComponent* WarningSpeakerPlayer;
    
private:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag LoopingAlarmCueTag;
    
    UPROPERTY(EditDefaultsOnly)
    UFMODEvent* WarningAlarmSound;
    
public:
    ASN2SubmarineAlertSpeaker(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnWarningTagChanged(FGameplayTag GameplayTag, int32 TagCount);
    
    UFUNCTION()
    void OnRedAlertTagChanged(FGameplayTag GameplayTag, int32 TagCount);
    
    UFUNCTION()
    void OnNewAlertPlayed(USN2SubmarineAlert* Alert);
    
    UFUNCTION()
    void OnBlockAlertTagChanged(FGameplayTag GameplayTag, int32 TagCount);
    
};

