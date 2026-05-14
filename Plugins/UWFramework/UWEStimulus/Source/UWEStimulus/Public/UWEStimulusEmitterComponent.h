#pragma once
#include "CoreMinimal.h"
#include "UWEStimulusComponent.h"
#include "UWEStimulusEmitterData.h"
#include "UWEStimulusEmitterComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWESTIMULUS_API UUWEStimulusEmitterComponent : public UUWEStimulusComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FUWEStimulusEmitterData Data;
    
public:
    UUWEStimulusEmitterComponent(const FObjectInitializer& ObjectInitializer);

};

