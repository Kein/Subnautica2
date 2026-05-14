#include "UWEAttachmentState.h"

FUWEAttachmentState::FUWEAttachmentState() {
    this->Attachment = NULL;
    this->DetachedAttachment = NULL;
    this->InterpolateToSocketStage = EUWEAttachmentInterpolateToSocketStage::None;
    this->AnimationStage = EUWEAttachmentAnimationStage::None;
    this->AwaitingDetachmentByAnimMontageNotify = false;
    this->Client_NeedsServerConfirmation = false;
    this->StateChangeTime = 0.00f;
    this->PreviousStateChangeTime = 0.00f;
    this->LevelSequenceActor = NULL;
}

