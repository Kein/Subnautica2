#pragma once
#include "CoreMinimal.h"
#include "GPPLegalAgreementWidget.h"
#include "GPPLegalAgreementMobileWidget.generated.h"

class UButton;
class UGPPMenuBtnWidget;

UCLASS(EditInlineNew)
class ONLINESUBSYSTEMGPP_API UGPPLegalAgreementMobileWidget : public UGPPLegalAgreementWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UGPPMenuBtnWidget* Btn_AgreeAllAndStart;
    
    UPROPERTY(Instanced)
    UButton* Btn_LoginWithOtherAccount;
    
public:
    UGPPLegalAgreementMobileWidget();

private:
    UFUNCTION()
    void OnClick_Btn_LoginWithOtherAccount();
    
    UFUNCTION()
    void OnClick_Btn_AgreeAllAndStart(bool Selected);
    
};

