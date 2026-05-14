#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GPPBaseScreen.h"
#include "GPPRepayWidgetInterface.h"
#include "GPPRepayDlgWidget.generated.h"

class UGPPBaseBtnWidget;
class UGPPMenuBtnWidget;
class UGPPRepayBtnListWidget;
class UGPPRepayErrorWidget;
class UGPPRepayWidgetObject;
class UGPPTextBlockList;
class USizeBox;
class UTextBlock;
class UVerticalBox;

UCLASS(EditInlineNew)
class ONLINESUBSYSTEMGPP_API UGPPRepayDlgWidget : public UGPPBaseScreen, public IGPPRepayWidgetInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FVector2D LandscapeScreenSize;
    
    UPROPERTY(EditAnywhere)
    FVector2D LandscapeDlgSize;
    
    UPROPERTY(EditAnywhere)
    FVector2D PortraitScreenSize;
    
    UPROPERTY(EditAnywhere)
    FVector2D PortraitDlgSize;
    
    UPROPERTY(EditAnywhere)
    bool bRepayError;
    
    UPROPERTY(Instanced)
    USizeBox* SB_Screen;
    
    UPROPERTY(Instanced)
    USizeBox* SB_Dlg;
    
    UPROPERTY(Instanced)
    USizeBox* SB_Landscape;
    
    UPROPERTY(Instanced)
    USizeBox* SB_LandscapeTitle;
    
    UPROPERTY(Instanced)
    USizeBox* SB_LandscapeDescription;
    
    UPROPERTY(Instanced)
    USizeBox* SB_LandscapeDescriptionList;
    
    UPROPERTY(Instanced)
    USizeBox* SB_LandscapeButtonList;
    
    UPROPERTY(Instanced)
    USizeBox* SB_LandscapeRepayInfo;
    
    UPROPERTY(Instanced)
    USizeBox* SB_LandscapeMainButton;
    
    UPROPERTY(Instanced)
    USizeBox* SB_Portrait;
    
    UPROPERTY(Instanced)
    USizeBox* SB_PortraitTitle;
    
    UPROPERTY(Instanced)
    USizeBox* SB_PortraitDescription;
    
    UPROPERTY(Instanced)
    USizeBox* SB_PortraitDescriptionList;
    
    UPROPERTY(Instanced)
    USizeBox* SB_PortraitButtonList;
    
    UPROPERTY(Instanced)
    USizeBox* SB_PortraitRepayInfo;
    
    UPROPERTY(Instanced)
    USizeBox* SB_PortraitMainButton;
    
    UPROPERTY(Instanced)
    UVerticalBox* VB_Buttons;
    
    UPROPERTY(Instanced)
    UGPPBaseBtnWidget* Btn_SupportButton;
    
    UPROPERTY(Instanced)
    UGPPBaseBtnWidget* Btn_SubButton;
    
    UPROPERTY(Instanced)
    UGPPRepayBtnListWidget* W_RepayList;
    
    UPROPERTY(Instanced)
    UGPPRepayErrorWidget* W_RepayError;
    
    UPROPERTY(Instanced)
    UGPPMenuBtnWidget* Btn_MainButton;
    
    UPROPERTY(Instanced)
    UTextBlock* TB_Title;
    
    UPROPERTY(Instanced)
    UTextBlock* TB_Text1;
    
    UPROPERTY(Instanced)
    UGPPTextBlockList* TB_Text2;
    
    UPROPERTY()
    UGPPRepayWidgetObject* RepayWidgetObject;
    
public:
    UGPPRepayDlgWidget();

private:
    UFUNCTION()
    void OnClickedSupportBtn(bool Selected);
    
    UFUNCTION()
    void OnClickedSubBtn(bool Selected);
    
    UFUNCTION()
    void OnClickedMainBtn(bool Selected);
    

    // Fix for true pure virtual functions not being implemented
};

