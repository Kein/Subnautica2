#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Layout/Margin.h"
#include "GPPBaseBtnWidget.h"
#include "GPPBrush.h"
#include "GPPColor.h"
#include "GPPFont.h"
#include "GPPRepayBtnWidget.generated.h"

class UGPPRepayBtnWidget;
class UImage;
class UOverlay;
class USizeBox;
class UTextBlock;

UCLASS(EditInlineNew)
class ONLINESUBSYSTEMGPP_API UGPPRepayBtnWidget : public UGPPBaseBtnWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnClickedGPPRepayBtn, UGPPRepayBtnWidget*, ClickedRepayBtn);
    
    UPROPERTY(BlueprintAssignable)
    FOnClickedGPPRepayBtn OnClickedRepayBtnDelegate;
    
private:
    UPROPERTY(Instanced)
    UTextBlock* T_ProductName;
    
    UPROPERTY(Instanced)
    UTextBlock* T_DateTime;
    
    UPROPERTY(Instanced)
    UTextBlock* T_Price;
    
    UPROPERTY(Instanced)
    UImage* Img_Background;
    
    UPROPERTY(Instanced)
    UOverlay* Ov_Content;
    
    UPROPERTY(Instanced)
    USizeBox* SB_BulletImg;
    
    UPROPERTY(Instanced)
    UImage* Img_Bullet;
    
    UPROPERTY(EditAnywhere)
    TArray<FGPPBrush> BackgroundList;
    
    UPROPERTY(EditAnywhere)
    TArray<FGPPBrush> BulletList;
    
    UPROPERTY(EditAnywhere)
    FMargin BulletPadding;
    
    UPROPERTY(EditAnywhere)
    FVector2D BulletSize;
    
    UPROPERTY(EditAnywhere)
    TArray<FGPPColor> TextTintColorList;
    
    UPROPERTY(EditAnywhere)
    TArray<FGPPFont> TextFontList;
    
    UPROPERTY(EditAnywhere)
    uint32 MaxTextLength;
    
public:
    UGPPRepayBtnWidget();

protected:
    UFUNCTION()
    void OnClickedRepayBtn(bool Selected);
    
};

