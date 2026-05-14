#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiActionBinding.generated.h"

class UInputAction;
class UUWEImGuiComponent;

USTRUCT(BlueprintType)
struct FUWEImGuiActionBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UInputAction* Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<UUWEImGuiComponent> Diagnostic;
    
    UWEIMGUI_API FUWEImGuiActionBinding();
};

