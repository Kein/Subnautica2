#pragma once
#include "CoreMinimal.h"
#include "GPPLegalAgreementListItemWidget.h"
#include "GPPLegalAgreementListItemPCWidget.generated.h"

class UGPPMenuBtnWidget;
class URichTextBlock;

UCLASS(EditInlineNew)
class ONLINESUBSYSTEMGPP_API UGPPLegalAgreementListItemPCWidget : public UGPPLegalAgreementListItemWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UGPPMenuBtnWidget* Btn_AgreeBox;
    
    UPROPERTY(Instanced)
    URichTextBlock* RichTextBlock_Title;
    
public:
    UGPPLegalAgreementListItemPCWidget();

private:
    UFUNCTION()
    void OnClick_Btn_AgreeBox(bool Selected);
    
};

