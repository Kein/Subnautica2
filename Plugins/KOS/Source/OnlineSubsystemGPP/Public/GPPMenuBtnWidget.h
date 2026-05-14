#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "GPPBaseBtnWidget.h"
#include "GPPBrush.h"
#include "GPPColor.h"
#include "GPPFont.h"
#include "GPPMenuBtnWidget.generated.h"

class UImage;
class UOverlay;
class USizeBox;
class UTextBlock;

UCLASS(EditInlineNew)
class ONLINESUBSYSTEMGPP_API UGPPMenuBtnWidget : public UGPPBaseBtnWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UTextBlock* T_Title;
    
    UPROPERTY(Instanced)
    UImage* Img_Background;
    
    UPROPERTY(Instanced)
    UOverlay* Ov_Content;
    
    UPROPERTY(Instanced)
    USizeBox* SB_BulletImg;
    
    UPROPERTY(Instanced)
    UImage* Img_Bullet;
    
    UPROPERTY(EditAnywhere)
    bool bUseBG;
    
    UPROPERTY(EditAnywhere)
    TArray<FGPPBrush> BackgroundList;
    
    UPROPERTY(EditAnywhere)
    bool bUseBulletImg;
    
    UPROPERTY(EditAnywhere)
    TArray<FGPPBrush> BulletList;
    
    UPROPERTY(EditAnywhere)
    FMargin BulletPadding;
    
    UPROPERTY(EditAnywhere)
    FVector2D BulletSize;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment_Content;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment_TitleText;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment_Bullet;
    
    UPROPERTY(EditAnywhere)
    bool bUseText;
    
    UPROPERTY(EditAnywhere)
    FText TitleText;
    
    UPROPERTY(EditAnywhere)
    FMargin TextPadding;
    
    UPROPERTY(EditAnywhere)
    TArray<FGPPColor> TextTintColorList;
    
    UPROPERTY(EditAnywhere)
    TArray<FGPPFont> TextFontList;
    
public:
    UGPPMenuBtnWidget();

};

