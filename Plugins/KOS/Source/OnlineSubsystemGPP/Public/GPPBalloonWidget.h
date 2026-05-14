#pragma once
#include "CoreMinimal.h"
#include "GPPBaseScreen.h"
#include "GPPBalloonWidget.generated.h"

class UTextBlock;

UCLASS(EditInlineNew)
class ONLINESUBSYSTEMGPP_API UGPPBalloonWidget : public UGPPBaseScreen {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UTextBlock* T_Title;
    
    UPROPERTY(Instanced)
    UTextBlock* T_Content;
    
public:
    UGPPBalloonWidget();

};

