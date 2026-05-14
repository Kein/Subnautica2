#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "Styling/SlateTypes.h"
#include "ImGuiKeyInfo.generated.h"

USTRUCT(BlueprintType)
struct FImGuiKeyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FKey Key;
    
    UPROPERTY(EditAnywhere)
    ECheckBoxState Shift;
    
    UPROPERTY(EditAnywhere)
    ECheckBoxState Ctrl;
    
    UPROPERTY(EditAnywhere)
    ECheckBoxState Alt;
    
    UPROPERTY(EditAnywhere)
    ECheckBoxState Cmd;
    
    IMGUI_API FImGuiKeyInfo();
};

