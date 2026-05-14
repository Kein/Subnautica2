#include "UWEGameplayCueNotify_PlacementInfo.h"

FUWEGameplayCueNotify_PlacementInfo::FUWEGameplayCueNotify_PlacementInfo() {
    this->AttachPolicy = EUWEGameplayCueNotify_AttachPolicy::DoNotAttach;
    this->AttachmentRule = EAttachmentRule::KeepRelative;
    this->bOverrideRotation = false;
    this->bOverrideScale = false;
}

