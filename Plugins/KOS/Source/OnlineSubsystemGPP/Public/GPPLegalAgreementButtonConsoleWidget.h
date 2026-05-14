#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateColor.h"
#include "Blueprint/UserWidget.h"
#include "GPPWidgetInterface_Exec_Start.h"
#include "GPPLegalAgreementButtonConsoleWidget.generated.h"

class UImage;
class UTextBlock;

UCLASS(EditInlineNew)
class ONLINESUBSYSTEMGPP_API UGPPLegalAgreementButtonConsoleWidget : public UUserWidget, public IGPPWidgetInterface_Exec_Start {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UImage* Img_Background;
    
    UPROPERTY(Instanced)
    UTextBlock* T_ButtonText;
    
    UPROPERTY(EditAnywhere)
    FSlateColor NormalColor;
    
    UPROPERTY(EditAnywhere)
    FSlateColor FocusedColor;
    
    UPROPERTY(EditAnywhere)
    FSlateColor DisabledColor;
    
    UPROPERTY(EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(EditAnywhere)
    bool bFocused;
    
    UPROPERTY(EditAnywhere)
    FText ButtonText;
    
public:
    UGPPLegalAgreementButtonConsoleWidget();


    // Fix for true pure virtual functions not being implemented
};

