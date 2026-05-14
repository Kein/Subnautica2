#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "Styling/SlateBrush.h"
#include "GPPBaseScreen.h"
#include "GPPToastMessageWidgetInterface.h"
#include "PaddingByUIMode.h"
#include "GPPToastMessageWidget.generated.h"

class UGPPMenuBtnWidget;
class UGPPToastMessageWidgetObject;
class UImage;
class UTextBlock;
class UWidget;
class UWidgetAnimation;

UCLASS(EditInlineNew)
class ONLINESUBSYSTEMGPP_API UGPPToastMessageWidget : public UGPPBaseScreen, public IGPPToastMessageWidgetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    UWidgetAnimation* DestroyWidgetAnim;
    
    UPROPERTY(EditAnywhere)
    float DestroyFirstDelay;
    
    UPROPERTY(EditAnywhere)
    float FastDestroyAnimPlayRate;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush SuccessTypeIcon;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush ErrorTypeIcon;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush WarningTypeIcon;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush InfoTypeIcon;
    
    UPROPERTY(EditAnywhere)
    TArray<FPaddingByUIMode> PaddingByUIModeList;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EVerticalAlignment> VerticalAlign;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlign;
    
    UPROPERTY(EditAnywhere)
    FText TitleText;
    
    UPROPERTY(EditAnywhere)
    FText ContentText;
    
private:
    UPROPERTY(Instanced)
    UWidget* RootComp;
    
    UPROPERTY(Instanced)
    UTextBlock* T_Title;
    
    UPROPERTY(Instanced)
    UWidget* RootContent;
    
    UPROPERTY(Instanced)
    UTextBlock* T_Content;
    
    UPROPERTY(Instanced)
    UImage* Img_TitleBulletIcon;
    
    UPROPERTY(Instanced)
    UGPPMenuBtnWidget* Btn_Close;
    
    UPROPERTY()
    UGPPToastMessageWidgetObject* ToastMessageWidgetObject;
    
public:
    UGPPToastMessageWidget();

private:
    UFUNCTION()
    void OnCloseWidget();
    
    UFUNCTION()
    void OnClickBtn_Close(bool bEnable);
    
public:
    UFUNCTION()
    void DestroyToastMessageWidget();
    

    // Fix for true pure virtual functions not being implemented
};

