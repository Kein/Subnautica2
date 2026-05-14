#pragma once
#include "CoreMinimal.h"
#include "FMODAudioComponent.h"
#include "UWEFMODAudioComponent.generated.h"

class FMODAudioComponent;

UCLASS(ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UWEAUDIO_API UUWEFMODAudioComponent : public UFMODAudioComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    int32 PlayingCountWarningThreshold;
    
    UUWEFMODAudioComponent(const FObjectInitializer& ObjectInitializer);

};

