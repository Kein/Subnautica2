#pragma once
#include "CoreMinimal.h"
#include "GPPBaseScreen.h"
#include "GPPLinkKIDByGPGSWidgetInterface.h"
#include "GPPLinkKIDByGPGSWidget.generated.h"

class UGPPLinkKIDByGPGSWidgetObject;
class UGPPMenuBtnWidget;
class UTextBlock;

UCLASS(EditInlineNew)
class ONLINESUBSYSTEMGPP_API UGPPLinkKIDByGPGSWidget : public UGPPBaseScreen, public IGPPLinkKIDByGPGSWidgetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, Transient)
    UTextBlock* TextBlock_Email;
    
    UPROPERTY(Instanced, Transient)
    UGPPMenuBtnWidget* Button_Cancel;
    
    UPROPERTY(Instanced, Transient)
    UGPPMenuBtnWidget* Button_Confirm;
    
private:
    UPROPERTY()
    UGPPLinkKIDByGPGSWidgetObject* LinkKIDByGPGSWidgetObject;
    
public:
    UGPPLinkKIDByGPGSWidget();

private:
    UFUNCTION()
    void OnClickButton_Confirm(bool bEnable);
    
    UFUNCTION()
    void OnClickButton_Cancel(bool bEnable);
    

    // Fix for true pure virtual functions not being implemented
};

