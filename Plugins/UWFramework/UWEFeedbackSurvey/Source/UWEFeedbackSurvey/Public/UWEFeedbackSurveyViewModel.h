#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MVVMViewModelBase.h"
#include "SonarSurveyQuestion.h"
#include "SonarSurveyResponse.h"
#include "UWEFeedbackSurveyViewModel.generated.h"

class UObject;
class UUWEFeedbackSurveySubsystem;

UCLASS()
class UWEFEEDBACKSURVEY_API UUWEFeedbackSurveyViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UUWEFeedbackSurveySubsystem* FeedbackSurveySubsystem;
    
    UPROPERTY(BlueprintReadOnly)
    FString DocId;
    
    UPROPERTY(BlueprintReadOnly)
    FString Title;
    
    UPROPERTY(BlueprintReadOnly)
    FDateTime Date;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FSonarSurveyQuestion> Questions;
    
    UPROPERTY()
    TArray<FSonarSurveyResponse> IncompleteActiveSurveys;
    
    UPROPERTY(BlueprintReadOnly)
    bool ShowSurveyButton;
    
public:
    UUWEFeedbackSurveyViewModel();

    UFUNCTION(BlueprintCallable)
    void UpdateCompletedSurveys();
    
protected:
    UFUNCTION()
    void OnSurveysRequested(bool bSuccess, TArray<FSonarSurveyResponse> Response);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    bool Initialize(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyIncompleteSurvey(TArray<FSonarSurveyResponse> ActiveSurveys);
    
    UFUNCTION(BlueprintCallable)
    void GetActiveSurveys();
    
};

