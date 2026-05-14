#pragma once
#include "CoreMinimal.h"
#include "GPPLegalAgreementListItemWidget.h"
#include "GPPLegalAgreementListItemMobileWidget.generated.h"

class UGPPMenuBtnWidget;
class UTextBlock;
class UWidget;

UCLASS(EditInlineNew)
class ONLINESUBSYSTEMGPP_API UGPPLegalAgreementListItemMobileWidget : public UGPPLegalAgreementListItemWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UWidget* Img_OpenDetailLegalAgreement;
    
    UPROPERTY(Instanced)
    UTextBlock* T_AgreementName;
    
    UPROPERTY(Instanced)
    UGPPMenuBtnWidget* Btn_Agree2;
    
public:
    UGPPLegalAgreementListItemMobileWidget();

private:
    UFUNCTION()
    void OnClick_Btn_Agree2(bool Selected);
    
};

