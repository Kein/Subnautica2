#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GPPRepayErrorWidget.generated.h"

class UTextBlock;

UCLASS(EditInlineNew)
class ONLINESUBSYSTEMGPP_API UGPPRepayErrorWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UTextBlock* TB_ErrorText;
    
public:
    UGPPRepayErrorWidget();

};

