#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "Engine/EngineBaseTypes.h"
#include "EUWEInputMode.h"
#include "FocusActivatableWidget.generated.h"

class UObject;

UCLASS(EditInlineNew)
class UWECOMMONUI_API UFocusActivatableWidget : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UObject* Context;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EUWEInputMode InputMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMouseCaptureMode CaptureMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool HideCursor;
    
public:
    UFocusActivatableWidget();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnContextChanged();
    
};

