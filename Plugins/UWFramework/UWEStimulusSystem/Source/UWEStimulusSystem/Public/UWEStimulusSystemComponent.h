#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWEStimulusSystemComponent.generated.h"

class UUWEStimulusDataAsset;
class UUWEStimulusSensor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWESTIMULUSSYSTEM_API UUWEStimulusSystemComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<UUWEStimulusDataAsset*> StimulusDataAssets;
    
private:
    UPROPERTY()
    TArray<UUWEStimulusSensor*> Sensors;
    
public:
    UUWEStimulusSystemComponent(const FObjectInitializer& ObjectInitializer);

};

