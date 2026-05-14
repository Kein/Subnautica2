#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EGPPUIMode.h"
#include "GPPBaseScreen.generated.h"

UCLASS(EditInlineNew)
class ONLINESUBSYSTEMGPP_API UGPPBaseScreen : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bUpdateOnPreConstruct;
    
private:
    UPROPERTY(EditAnywhere)
    EGPPUIMode UIMode;
    
public:
    UGPPBaseScreen();

    UFUNCTION(BlueprintCallable)
    void UpdateWidget();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnChangeScreenOrientation();
    
    UFUNCTION(BlueprintPure)
    EGPPUIMode GetUIMode() const;
    
};

