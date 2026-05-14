#include "SN2SubmarineAlertLight.h"

ASN2SubmarineAlertLight::ASN2SubmarineAlertLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool ASN2SubmarineAlertLight::ShouldPlayAlarmLights() const {
    return false;
}


void ASN2SubmarineAlertLight::OnRedAlertTagChanged(FGameplayTag GameplayTag, int32 TagCount) {
}

void ASN2SubmarineAlertLight::OnNewAlertPlayed(USN2SubmarineAlert* NewAlert) {
}

void ASN2SubmarineAlertLight::OnBlockAlertTagChanged(FGameplayTag GameplayTag, int32 TagCount) {
}

bool ASN2SubmarineAlertLight::IsRedAlert() const {
    return false;
}


