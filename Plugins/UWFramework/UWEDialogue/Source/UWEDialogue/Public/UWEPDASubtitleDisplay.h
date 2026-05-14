#pragma once
#include "CoreMinimal.h"
#include "FocusActivatableWidget.h"
#include "UWEPDASubtitleDisplay.generated.h"

UCLASS(EditInlineNew)
class UWEDIALOGUE_API UUWEPDASubtitleDisplay : public UFocusActivatableWidget {
    GENERATED_BODY()
public:
    UUWEPDASubtitleDisplay();

    UFUNCTION(BlueprintImplementableEvent)
    void FadeOut();
    
};

