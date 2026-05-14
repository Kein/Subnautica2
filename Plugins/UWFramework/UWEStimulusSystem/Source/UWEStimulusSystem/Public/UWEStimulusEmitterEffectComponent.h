#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectComponent.h"
#include "UWESimpleShape.h"
#include "UWEStimulusEmitterEffectComponent.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UWESTIMULUSSYSTEM_API UUWEStimulusEmitterEffectComponent : public UGameplayEffectComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FUWESimpleShape Shape;
    
    UPROPERTY(EditDefaultsOnly)
    float StimulusDuration;
    
    UUWEStimulusEmitterEffectComponent();

};

