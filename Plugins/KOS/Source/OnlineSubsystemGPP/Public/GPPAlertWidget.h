#pragma once
#include "CoreMinimal.h"
#include "GPPAlertWidgetInterface.h"
#include "GPPBaseScreen.h"
#include "GPPAlertWidget.generated.h"

class UGPPAlertWidgetObject;
class UGPPMenuBtnWidget;
class UTextBlock;
class UWidget;
class UWidgetSwitcher;

UCLASS(EditInlineNew)
class ONLINESUBSYSTEMGPP_API UGPPAlertWidget : public UGPPBaseScreen, public IGPPAlertWidgetInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UTextBlock* T_Title;
    
    UPROPERTY(Instanced)
    UWidget* DescContentRoot;
    
    UPROPERTY(Instanced)
    UTextBlock* T_Desc_Content;
    
    UPROPERTY(Instanced)
    UWidgetSwitcher* WS_BtnContent;
    
    UPROPERTY(Instanced)
    UGPPMenuBtnWidget* Btn_ForOneBtnType;
    
    UPROPERTY(Instanced)
    UGPPMenuBtnWidget* Btn_1_ForTwoBtnType;
    
    UPROPERTY(Instanced)
    UGPPMenuBtnWidget* Btn_2_ForTwoBtnType;
    
    UPROPERTY(EditAnywhere)
    FText TitleText;
    
    UPROPERTY(EditAnywhere)
    FText DescriptionContentText;
    
    UPROPERTY(EditAnywhere)
    FText LeftBtnText;
    
    UPROPERTY(EditAnywhere)
    FText RightBtnText;
    
    UPROPERTY()
    UGPPAlertWidgetObject* AlertWidgetObject;
    
public:
    UGPPAlertWidget();

private:
    UFUNCTION()
    void OnClickBtn_Btn_ForOneBtnType(bool bEnable);
    
    UFUNCTION()
    void OnClickBtn_2_ForTwoBtnType(bool bEnable);
    
    UFUNCTION()
    void OnClickBtn_1_ForTwoBtnType(bool bEnable);
    

    // Fix for true pure virtual functions not being implemented
};

