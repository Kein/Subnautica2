#include "SN2PlayerCameraManager.h"

ASN2PlayerCameraManager::ASN2PlayerCameraManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultModifiers.AddDefaulted(1);
    this->InterpolateSettingsSpeed = 4.00f;
}


