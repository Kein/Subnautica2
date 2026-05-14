#include "UWEENetworkedAttachmentConfig.h"

FUWEENetworkedAttachmentConfig::FUWEENetworkedAttachmentConfig() {
    this->GenerateConfigsBySocketsWithPrefix = false;
    this->AttachmentRule = EUWENetworkedAttachmentSocketRule::SnapToSocket;
    this->DetachmentRule = EUWENetworkedAttachmentSocketRule::SnapToSocket;
    this->FindProperDetachmentSpotAroundOwner = false;
    this->FindProperDetachmentSpotOnlyAroundOwnerRootCollision = false;
    this->CameraControl = EUWEENetworkedAttachmentCameraControl::DoNotChange;
    this->ChangeInputMappingContext = false;
    this->InputMappingContext = NULL;
    this->VelocityCalculation = EUWEENetworkedAttachmentVelocityCalculation::None;
    this->PreventCMCFallingMode = false;
    this->AllowGameSave = false;
    this->bDebug = false;
}

