#include "UWEAbilityInputPrompt.h"

FUWEAbilityInputPrompt::FUWEAbilityInputPrompt() {
    this->TargetNameSource = EUWEInputPromptTargetNameSource::HoverTarget;
    this->bShowAtToolbar = false;
    this->bHideActorName = false;
    this->bHightlightTarget = false;
    this->PromptPriority = 0;
}

