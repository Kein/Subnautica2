#pragma once
#include "CoreMinimal.h"
#include "GPPBaseScreen.h"
#include "GPPLinkKIDByPlatformTokenWidget.generated.h"

class UGPPMenuBtnWidget;
class UTextBlock;

UCLASS(EditInlineNew)
class ONLINESUBSYSTEMGPP_API UGPPLinkKIDByPlatformTokenWidget : public UGPPBaseScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, Transient)
    UTextBlock* TextBlock_Description;
    
    UPROPERTY(Instanced, Transient)
    UTextBlock* TextBlock_Email;
    
    UPROPERTY(Instanced, Transient)
    UGPPMenuBtnWidget* Button_Confirm;
    
public:
    UGPPLinkKIDByPlatformTokenWidget();

private:
    UFUNCTION()
    void OnClickButton_Confirm(bool bEnable);
    
};

