#include "UWEFrontendPlayerController.h"

AUWEFrontendPlayerController::AUWEFrontendPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->ReturnReason = EUWEFrontendMenuReturnReason::None;
}


