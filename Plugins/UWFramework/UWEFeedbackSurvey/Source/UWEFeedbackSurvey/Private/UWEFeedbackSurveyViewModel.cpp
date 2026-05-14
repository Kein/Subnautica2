#include "UWEFeedbackSurveyViewModel.h"

UUWEFeedbackSurveyViewModel::UUWEFeedbackSurveyViewModel() {
    this->FeedbackSurveySubsystem = NULL;
    this->ShowSurveyButton = false;
}

void UUWEFeedbackSurveyViewModel::UpdateCompletedSurveys() {
}

void UUWEFeedbackSurveyViewModel::OnSurveysRequested(bool bSuccess, TArray<FSonarSurveyResponse> Response) {
}

bool UUWEFeedbackSurveyViewModel::Initialize(UObject* WorldContext) {
    return false;
}

bool UUWEFeedbackSurveyViewModel::HasAnyIncompleteSurvey(TArray<FSonarSurveyResponse> ActiveSurveys) {
    return false;
}

void UUWEFeedbackSurveyViewModel::GetActiveSurveys() {
}


