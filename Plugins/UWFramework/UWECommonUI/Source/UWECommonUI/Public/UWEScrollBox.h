#pragma once
#include "CoreMinimal.h"
#include "Components/ScrollBox.h"
#include "UWEScrollBox.generated.h"

class UWidget;

UCLASS()
class UWECOMMONUI_API UUWEScrollBox : public UScrollBox {
    GENERATED_BODY()
public:
    UUWEScrollBox();

    UFUNCTION(BlueprintCallable)
    bool IsWidgetInView(UWidget* Widget);
    
};

