#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UWEStimulusSensor.generated.h"

class UUWEStimulusSystemComponent;

UCLASS()
class UWESTIMULUSSYSTEM_API UUWEStimulusSensor : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    TWeakObjectPtr<UUWEStimulusSystemComponent> StimulusSystemComponent;
    
    UUWEStimulusSensor();

};

