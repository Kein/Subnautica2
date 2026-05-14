#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GPPPendingAlertWidgetInterface.h"
#include "GPPPendingAlertWidget.generated.h"

class UGPPMenuBtnWidget;
class UGPPPendingAlertWidgetObject;
class USizeBox;
class UTextBlock;
class UWidgetSwitcher;

UCLASS(Abstract, EditInlineNew)
class ONLINESUBSYSTEMGPP_API UGPPPendingAlertWidget : public UUserWidget, public IGPPPendingAlertWidgetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, Transient)
    UWidgetSwitcher* WidgetSwitcher_ButtonContent;
    
    UPROPERTY(Instanced, Transient)
    UTextBlock* TextBlock_Title;
    
    UPROPERTY(Instanced, Transient)
    UTextBlock* TextBlock_Subtitle;
    
    UPROPERTY(Instanced, Transient)
    UTextBlock* TextBlock_Description;
    
    UPROPERTY(Instanced, Transient)
    UGPPMenuBtnWidget* Button_ForOneButtonClose;
    
    UPROPERTY(Instanced, Transient)
    UGPPMenuBtnWidget* Button_ForTwoButtonLeft;
    
    UPROPERTY(Instanced, Transient)
    UGPPMenuBtnWidget* Button_ForTwoButtonRight;
    
    UPROPERTY(Instanced, Transient)
    USizeBox* SizeBox_Error;
    
    UPROPERTY()
    UGPPPendingAlertWidgetObject* AlertWidgetObject;
    
public:
    UGPPPendingAlertWidget();

private:
    UFUNCTION()
    void OnClickButton_ForTwoButtonRight(bool bIsSelect);
    
    UFUNCTION()
    void OnClickButton_ForTwoButtonLeft(bool bIsSelect);
    
    UFUNCTION()
    void OnClickButton_ForOneButtonClose(bool bIsSelect);
    

    // Fix for true pure virtual functions not being implemented
};

