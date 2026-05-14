#pragma once
#include "CoreMinimal.h"
#include "GPPLegalAgreementWidget.h"
#include "GPPLegalAgreementPCWidget.generated.h"

class UGPPMenuBtnWidget;

UCLASS(EditInlineNew)
class ONLINESUBSYSTEMGPP_API UGPPLegalAgreementPCWidget : public UGPPLegalAgreementWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UGPPMenuBtnWidget* Btn_AgreeAllAndStart;
    
    UPROPERTY(Instanced)
    UGPPMenuBtnWidget* Btn_AgreeAll;
    
    UPROPERTY(Instanced)
    UGPPMenuBtnWidget* Btn_AgreeAllBox;
    
public:
    UGPPLegalAgreementPCWidget();

private:
    UFUNCTION()
    void OnClick_Btn_AgreeAllBox(bool Selected);
    
    UFUNCTION()
    void OnClick_Btn_AgreeAllAndStart(bool Selected);
    
    UFUNCTION()
    void OnClick_Btn_AgreeAll(bool Selected);
    
};

