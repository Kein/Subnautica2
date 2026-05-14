#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "OnShaderCompilationCompleteDelegate.h"
#include "UWEPressStartScreenViewModel.generated.h"

class AUWEFrontendPlayerController;

UCLASS(Config=Game)
class UWEFRONTEND_API UUWEPressStartScreenViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString LoggedInUserGamerTag;
    
    UPROPERTY(BlueprintReadOnly)
    bool ShowUserInfoPanel;
    
private:
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    bool bHoldForShaderCompilation;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    float ShaderPrecompilationPercentageComplete;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    int32 InitialShaderPrecompiles;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    int32 CompletedShaderPrecompiles;
    
    UPROPERTY(BlueprintAssignable)
    FOnShaderCompilationComplete OnShaderCompilationComplete;
    
    UPROPERTY(BlueprintReadOnly, Config, meta=(AllowPrivateAccess=true))
    FText EADisclaimerHeaderText;
    
    UPROPERTY(BlueprintReadOnly, Config, meta=(AllowPrivateAccess=true))
    FText EADisclaimerBodyText;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    FText VersionString;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    int32 BuildNumber;
    
    UPROPERTY(BlueprintReadOnly, Config, meta=(AllowPrivateAccess=true))
    bool IsOnlineAccessRequired;
    
public:
    UUWEPressStartScreenViewModel();

    UFUNCTION(BlueprintCallable)
    void Initialize(AUWEFrontendPlayerController* FrontendPC);
    
};

