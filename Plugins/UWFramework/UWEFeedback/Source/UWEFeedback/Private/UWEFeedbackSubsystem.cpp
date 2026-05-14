#include "UWEFeedbackSubsystem.h"

UUWEFeedbackSubsystem::UUWEFeedbackSubsystem() {
    this->bUploadSupportingFiles = true;
}

void UUWEFeedbackSubsystem::UploadSupportingFiles(APlayerController* PC, const FString& Sentiment, const FString& Response, const FString& CustomMessage) {
}

void UUWEFeedbackSubsystem::SubmitFeedback(APlayerController* PC, const FString& Sentiment, const FString& Response, const FString& CustomMessage) {
}

void UUWEFeedbackSubsystem::RequestScreenshot(bool ShowUI) {
}


