#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SonarSurveyAnswer.h"
#include "ESurveyStatus.h"
#include "SurveyDelegateDelegate.h"
#include "UWEFeedbackSurveySubsystem.generated.h"

class UUWEFeedbackSurveyViewModel;

UCLASS(BlueprintType)
class UWEFEEDBACKSURVEY_API UUWEFeedbackSurveySubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSurveyDelegate OnSurveysRequested;
    
    UPROPERTY(BlueprintReadOnly)
    ESurveyStatus SurveyStatus;
    
protected:
    UPROPERTY()
    UUWEFeedbackSurveyViewModel* SurveyViewModel;
    
public:
    UUWEFeedbackSurveySubsystem();

    UFUNCTION(BlueprintCallable)
    void SubmitSurveyResponse(const FString& Title, const FString& SurveyId, TArray<FSonarSurveyAnswer> Answers);
    
protected:
    UFUNCTION()
    void OnSonarConnectionChanged(bool bIsConnected);
    
public:
    UFUNCTION(BlueprintCallable)
    void GetActiveSurveys();
    
};

