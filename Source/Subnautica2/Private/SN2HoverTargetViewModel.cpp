#include "SN2HoverTargetViewModel.h"

USN2HoverTargetViewModel::USN2HoverTargetViewModel() {
    this->HoveredActor = NULL;
    this->HoveredActorDistance = 0.00f;
    this->IsInventoryFull = false;
    this->HoveredTargetInRangeForPrompt = false;
    this->EquippedTool = NULL;
    this->ShouldBeVisible = true;
    this->ShouldReticleBeVisible = true;
    this->MaxValidHoverPromptDistance = 800.00f;
    this->bIsConstructionProgressVisible = false;
    this->WorldContextObject = NULL;
}


