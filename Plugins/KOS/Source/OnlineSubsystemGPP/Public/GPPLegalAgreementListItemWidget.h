#pragma once
#include "CoreMinimal.h"
#include "GPPBaseScreen.h"
#include "GPPLegalAgreementListItemWidget.generated.h"

class UGPPLegalAgreementWidgetObject;
class UGPPMenuBtnWidget;

UCLASS(EditInlineNew)
class ONLINESUBSYSTEMGPP_API UGPPLegalAgreementListItemWidget : public UGPPBaseScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UGPPLegalAgreementWidgetObject* LegalAgreementWidgetObject;
    
    UPROPERTY(Instanced)
    UGPPMenuBtnWidget* Btn_Agree;
    
private:
    UPROPERTY(Instanced)
    UGPPMenuBtnWidget* Btn_OpenDetailLegalAgreement;
    
public:
    UGPPLegalAgreementListItemWidget();

private:
    UFUNCTION()
    void OnClick_Btn_OpenDetailLegalAgreement(bool Selected);
    
    UFUNCTION()
    void OnClick_Btn_Agree(bool Selected);
    
};

