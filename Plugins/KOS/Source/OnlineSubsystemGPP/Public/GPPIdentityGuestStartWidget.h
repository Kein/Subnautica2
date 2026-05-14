#pragma once
#include "CoreMinimal.h"
#include "EGPPSelectButtonType.h"
#include "GPPBaseScreen.h"
#include "GPPIdentityGuestStartWidget.generated.h"

UCLASS(EditInlineNew)
class ONLINESUBSYSTEMGPP_API UGPPIdentityGuestStartWidget : public UGPPBaseScreen {
    GENERATED_BODY()
public:
    UGPPIdentityGuestStartWidget();

    UFUNCTION(BlueprintCallable)
    void OnSelectButton(EGPPSelectButtonType pSelectButton);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GPPShowGuestStartWidgetBP();
    
};

