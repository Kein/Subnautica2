#pragma once
#include "CoreMinimal.h"
#include "GPPBaseScreen.h"
#include "GPPLegalAgreementWidgetInterface.h"
#include "GPPLegalAgreementWidget.generated.h"

class UGPPLegalAgreementListItemWidget;
class UGPPLegalAgreementWidgetObject;
class UGPPMenuBtnWidget;
class UScrollBox;
class UVerticalBox;

UCLASS(EditInlineNew)
class ONLINESUBSYSTEMGPP_API UGPPLegalAgreementWidget : public UGPPBaseScreen, public IGPPLegalAgreementWidgetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UGPPLegalAgreementWidgetObject* LegalAgreementWidgetObject;
    
    UPROPERTY(Instanced)
    UScrollBox* SB_Content;
    
private:
    UPROPERTY(Instanced)
    UGPPMenuBtnWidget* Btn_Start;
    
    UPROPERTY(Instanced)
    UVerticalBox* VB_List;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UGPPLegalAgreementListItemWidget> LegalAgreementListItemWidget;
    
public:
    UGPPLegalAgreementWidget();

private:
    UFUNCTION()
    void OnClick_Btn_Start(bool Selected);
    
    UFUNCTION()
    void OnAgreeLegalAgreement();
    

    // Fix for true pure virtual functions not being implemented
};

