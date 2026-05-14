#pragma once
#include "CoreMinimal.h"
#include "UWEInputBinding.generated.h"

class UInputAction;

USTRUCT()
struct FUWEInputBinding {
    GENERATED_BODY()
public:
    UPROPERTY()
    TWeakObjectPtr<UInputAction> InputAction;
    
    UWEABILITYSYSTEM_API FUWEInputBinding();
};

