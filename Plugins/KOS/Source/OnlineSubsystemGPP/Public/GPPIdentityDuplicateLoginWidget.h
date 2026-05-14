#pragma once
#include "CoreMinimal.h"
#include "GPPBaseScreen.h"
#include "GPPIdentityDuplicateLoginWidget.generated.h"

UCLASS(EditInlineNew)
class ONLINESUBSYSTEMGPP_API UGPPIdentityDuplicateLoginWidget : public UGPPBaseScreen {
    GENERATED_BODY()
public:
    UGPPIdentityDuplicateLoginWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GPPShowDuplicateLoginWidgetBP();
    
};

