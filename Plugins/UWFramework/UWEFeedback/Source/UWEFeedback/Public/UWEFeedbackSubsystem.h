#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ScreenshotRequestDelegateDelegate.h"
#include "UWEFeedbackSubsystem.generated.h"

class APlayerController;

UCLASS(BlueprintType, Config=Game)
class UWEFEEDBACK_API UUWEFeedbackSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bUploadSupportingFiles;
    
    UPROPERTY(BlueprintAssignable)
    FScreenshotRequestDelegate ScreenshotRequestHandle;
    
    UUWEFeedbackSubsystem();

    UFUNCTION(BlueprintCallable)
    void UploadSupportingFiles(APlayerController* PC, const FString& Sentiment, const FString& Response, const FString& CustomMessage);
    
    UFUNCTION(BlueprintCallable)
    void SubmitFeedback(APlayerController* PC, const FString& Sentiment, const FString& Response, const FString& CustomMessage);
    
    UFUNCTION(BlueprintCallable)
    void RequestScreenshot(bool ShowUI);
    
};

