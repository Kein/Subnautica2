#pragma once
#include "CoreMinimal.h"
#include "ModalActivatableWidget.h"
#include "SN2CheatInput.generated.h"

UCLASS(EditInlineNew)
class SUBNAUTICA2_API USN2CheatInput : public UModalActivatableWidget {
    GENERATED_BODY()
public:
    USN2CheatInput();

    UFUNCTION()
    void HandleAutoComplete();
    
    UFUNCTION(BlueprintCallable)
    FString GetTypedString();
    
    UFUNCTION(BlueprintCallable)
    FString GetAutoCompleteString();
    
    UFUNCTION(BlueprintCallable)
    FString GetAutoCompleteDescription();
    
};

