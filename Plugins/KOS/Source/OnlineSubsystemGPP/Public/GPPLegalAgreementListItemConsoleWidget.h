#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateColor.h"
#include "Blueprint/UserWidget.h"
#include "GPPWidgetInterface_Exec_OpenDetail.h"
#include "GPPWidgetInterface_Exec_Select.h"
#include "GPPLegalAgreementListItemConsoleWidget.generated.h"

class UImage;
class URichTextBlock;

UCLASS(EditInlineNew)
class ONLINESUBSYSTEMGPP_API UGPPLegalAgreementListItemConsoleWidget : public UUserWidget, public IGPPWidgetInterface_Exec_Select, public IGPPWidgetInterface_Exec_OpenDetail {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UImage* Img_Background;
    
    UPROPERTY(Instanced)
    UImage* Img_CheckBox;
    
    UPROPERTY(Instanced)
    URichTextBlock* RT_LegalText;
    
    UPROPERTY(EditAnywhere)
    FSlateColor NormalColor;
    
    UPROPERTY(EditAnywhere)
    FSlateColor FocusedColor;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush BlankImage;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush ChecktImage;
    
    UPROPERTY(EditAnywhere)
    bool bFocused;
    
    UPROPERTY(EditAnywhere)
    bool bChecked;
    
public:
    UGPPLegalAgreementListItemConsoleWidget();


    // Fix for true pure virtual functions not being implemented
};

