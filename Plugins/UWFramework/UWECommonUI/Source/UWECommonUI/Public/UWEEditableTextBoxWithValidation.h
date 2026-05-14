#pragma once
#include "CoreMinimal.h"
#include "Components/EditableTextBox.h"
#include "UWEEditableTextBoxWithValidation.generated.h"

UCLASS(Blueprintable)
class UWECOMMONUI_API UUWEEditableTextBoxWithValidation : public UEditableTextBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxNumChars;
    
public:
    UUWEEditableTextBoxWithValidation();

    UFUNCTION(BlueprintNativeEvent)
    bool ValidateText(const FText& InText);
    
};

