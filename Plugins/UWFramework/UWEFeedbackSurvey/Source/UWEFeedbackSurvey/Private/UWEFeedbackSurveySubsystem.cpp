#include "UWEFeedbackSurveySubsystem.h"
#include "UWEFeedbackSurveyViewModel.h"

UUWEFeedbackSurveySubsystem::UUWEFeedbackSurveySubsystem() {
    this->SurveyStatus = ESurveyStatus::Uninitialized;
    this->SurveyViewModel = CreateDefaultSubobject<UUWEFeedbackSurveyViewModel>(TEXT("FeedbackSurveyViewModel"));
}

void UUWEFeedbackSurveySubsystem::SubmitSurveyResponse(const FString& Title, const FString& SurveyId, TArray<FSonarSurveyAnswer> Answers) {
}

void UUWEFeedbackSurveySubsystem::OnSonarConnectionChanged(bool bIsConnected) {
}

void UUWEFeedbackSurveySubsystem::GetActiveSurveys() {
}


