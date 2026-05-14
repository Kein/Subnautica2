#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "SN2FeedbackViewModel.generated.h"

class UObject;
class UTexture2D;
class UUWEFeedbackSubsystem;

UCLASS()
class SUBNAUTICA2_API USN2FeedbackViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UUWEFeedbackSubsystem* FeedbackSubsystem;
    
    UPROPERTY(BlueprintReadOnly)
    UTexture2D* Screenshot;
    
public:
    USN2FeedbackViewModel();

    UFUNCTION(BlueprintCallable)
    void OnScreenShotCaptured(UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    bool Initialize(UObject* WorldContext);
    
};

