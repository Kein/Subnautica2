#include "SN2FeedbackViewModel.h"

USN2FeedbackViewModel::USN2FeedbackViewModel() {
    this->FeedbackSubsystem = NULL;
    this->Screenshot = NULL;
}

void USN2FeedbackViewModel::OnScreenShotCaptured(UTexture2D* Texture) {
}

bool USN2FeedbackViewModel::Initialize(UObject* WorldContext) {
    return false;
}


