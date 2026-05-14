#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GPPLegalAgreementWidgetInterface.h"
#include "GPPWidgetInterface_Exec_AcceptAllAndStart.h"
#include "GPPWidgetInterface_Exec_ScrollMove.h"
#include "Templates/SubclassOf.h"
#include "GPPLegalAgreementConsoleWidget.generated.h"

class UGPPKeyGuideFooterWidget;
class UGPPLegalAgreementButtonConsoleWidget;
class UGPPLegalAgreementListItemConsoleWidget;
class UGPPLegalAgreementWidgetObject;
class UGPPWidgetInputController;
class UScrollBox;
class UVerticalBox;

UCLASS(EditInlineNew)
class ONLINESUBSYSTEMGPP_API UGPPLegalAgreementConsoleWidget : public UUserWidget, public IGPPLegalAgreementWidgetInterface, public IGPPWidgetInterface_Exec_AcceptAllAndStart, public IGPPWidgetInterface_Exec_ScrollMove {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UGPPLegalAgreementWidgetObject* LegalAgreementWidgetObject;
    
    UPROPERTY(Instanced)
    UScrollBox* SB_LegalAgreementListScroll;
    
    UPROPERTY(Instanced)
    UVerticalBox* VB_LegalAgreementListItems;
    
    UPROPERTY(Instanced)
    UGPPLegalAgreementButtonConsoleWidget* W_StartButton;
    
    UPROPERTY(Instanced)
    UGPPKeyGuideFooterWidget* W_KeyGuide;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGPPWidgetInputController> InputController;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UGPPLegalAgreementListItemConsoleWidget> LegalAgreementListItemWidget;
    
public:
    UGPPLegalAgreementConsoleWidget();


    // Fix for true pure virtual functions not being implemented
};

