#include "SN2SubmarineAlertSpeaker.h"
#include "Components/SceneComponent.h"
#include "UWEFMODAudioComponent.h"

ASN2SubmarineAlertSpeaker::ASN2SubmarineAlertSpeaker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
    this->AlertSpeakerPlayer = CreateDefaultSubobject<UUWEFMODAudioComponent>(TEXT("Audio Component"));
    this->WarningSpeakerPlayer = CreateDefaultSubobject<UUWEFMODAudioComponent>(TEXT("Warning Audio Component"));
    this->WarningAlarmSound = NULL;
    this->AlertSpeakerPlayer->SetupAttachment(RootComponent);
    this->WarningSpeakerPlayer->SetupAttachment(RootComponent);
}

void ASN2SubmarineAlertSpeaker::OnWarningTagChanged(FGameplayTag GameplayTag, int32 TagCount) {
}

void ASN2SubmarineAlertSpeaker::OnRedAlertTagChanged(FGameplayTag GameplayTag, int32 TagCount) {
}

void ASN2SubmarineAlertSpeaker::OnNewAlertPlayed(USN2SubmarineAlert* Alert) {
}

void ASN2SubmarineAlertSpeaker::OnBlockAlertTagChanged(FGameplayTag GameplayTag, int32 TagCount) {
}


