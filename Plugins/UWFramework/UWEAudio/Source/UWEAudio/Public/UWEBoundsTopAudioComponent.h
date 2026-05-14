#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWEBoundsTopAudioComponent.generated.h"

class APlayerCameraManager;
class UFMODAudioComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEAUDIO_API UUWEBoundsTopAudioComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ClampActorBoundsZToZero;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UFMODAudioComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    APlayerCameraManager* CameraManager;
    
public:
    UUWEBoundsTopAudioComponent(const FObjectInitializer& ObjectInitializer);

};

