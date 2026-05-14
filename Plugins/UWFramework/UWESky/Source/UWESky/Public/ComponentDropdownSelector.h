#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ComponentDropdownSelector.generated.h"

class USceneComponent;

UCLASS()
class UWESKY_API UComponentDropdownSelector : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    TWeakObjectPtr<USceneComponent> Data;
    
    UComponentDropdownSelector();

};

