#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StimulusShape.h"
#include "UWEStimulusComponent.generated.h"

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWESTIMULUS_API UUWEStimulusComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FStimulusShape Shape;
    
public:
    UUWEStimulusComponent(const FObjectInitializer& ObjectInitializer);

};

