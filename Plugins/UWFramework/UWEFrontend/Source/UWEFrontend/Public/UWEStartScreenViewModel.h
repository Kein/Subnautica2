#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "EUWEStartScreenState.h"
#include "OnStartScreenStateChangedDelegate.h"
#include "UWEStartScreenViewModel.generated.h"

class AUWEFrontendHUD;
class AUWEFrontendPlayerController;

UCLASS(Config=Game)
class UWEFRONTEND_API UUWEStartScreenViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable)
    FOnStartScreenStateChanged OnStartScreenStateChanged;
    
    UPROPERTY()
    AUWEFrontendHUD* FrontendHUD;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    EUWEStartScreenState CurrentState;
    
public:
    UUWEStartScreenViewModel();

    UFUNCTION(BlueprintCallable)
    void Initialize(AUWEFrontendPlayerController* FrontendPC);
    
    UFUNCTION(BlueprintCallable)
    void Advance();
    
};

