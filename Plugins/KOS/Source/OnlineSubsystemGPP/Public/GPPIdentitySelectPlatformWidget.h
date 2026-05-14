#pragma once
#include "CoreMinimal.h"
#include "EGPPlatformLoginType.h"
#include "GPPBaseScreen.h"
#include "GPPIdentitySelectPlatformWidget.generated.h"

UCLASS(EditInlineNew)
class ONLINESUBSYSTEMGPP_API UGPPIdentitySelectPlatformWidget : public UGPPBaseScreen {
    GENERATED_BODY()
public:
    UGPPIdentitySelectPlatformWidget();

    UFUNCTION(BlueprintCallable)
    void OnSelectPlatformComplete(EGPPlatformLoginType InLoginType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GPPShowSelectPlatformWidgetBP(bool pKID, bool pGoogle, bool pFacebook, bool pApple, bool pDiscord, bool pGuest, EGPPlatformLoginType pLastLogin);
    
    UFUNCTION(BlueprintCallable)
    bool GPPLogin(UPARAM(Ref) FString& pLoginType);
    
};

