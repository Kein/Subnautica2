#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GPPPendingAlertWidgetInterface.h"
#include "GPPWidgetInterface_Exec_Cancel.h"
#include "GPPWidgetInterface_Exec_Close.h"
#include "GPPWidgetInterface_Exec_ScrollMove.h"
#include "Templates/SubclassOf.h"
#include "GPPPendingAlertConsoleWidget.generated.h"

class UGPPKeyGuideFooterWidget;
class UGPPPendingAlertWidgetObject;
class UGPPWidgetInputController;
class UScrollBox;
class USizeBox;
class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class ONLINESUBSYSTEMGPP_API UGPPPendingAlertConsoleWidget : public UUserWidget, public IGPPPendingAlertWidgetInterface, public IGPPWidgetInterface_Exec_Cancel, public IGPPWidgetInterface_Exec_Close, public IGPPWidgetInterface_Exec_ScrollMove {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, Transient)
    UTextBlock* TextBlock_Subtitle;
    
    UPROPERTY(Instanced, Transient)
    UTextBlock* TextBlock_Description;
    
    UPROPERTY(Instanced)
    USizeBox* SB_Loading;
    
    UPROPERTY(Instanced)
    USizeBox* SB_Error;
    
    UPROPERTY(Instanced)
    UScrollBox* SB_ScrollBox;
    
    UPROPERTY(Instanced)
    UGPPKeyGuideFooterWidget* W_KeyGuide;
    
private:
    UPROPERTY()
    UGPPPendingAlertWidgetObject* AlertWidgetObject;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGPPWidgetInputController> InputController;
    
public:
    UGPPPendingAlertConsoleWidget();


    // Fix for true pure virtual functions not being implemented
};

