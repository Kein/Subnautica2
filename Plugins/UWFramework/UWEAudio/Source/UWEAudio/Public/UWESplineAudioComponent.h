#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWESplineAudioComponent.generated.h"

class APlayerCameraManager;
class UFMODAudioComponent;
class USplineComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEAUDIO_API UUWESplineAudioComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InterpolationSpeed;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UFMODAudioComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    APlayerCameraManager* CameraManager;
    
public:
    UUWESplineAudioComponent(const FObjectInitializer& ObjectInitializer);

};

