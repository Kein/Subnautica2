#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnDisplayModeChangedDelegate.h"
#include "UWEGameCaptureComponent.generated.h"

class APawn;
class APlayerCameraManager;
class UCameraComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEGAMECAPTURE_API UUWEGameCaptureComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnDisplayModeChanged OnDisplayModeChanged;
    
protected:
    UPROPERTY(Instanced)
    UCameraComponent* CameraComponent;
    
    UPROPERTY()
    APlayerCameraManager* CameraManager;
    
public:
    UUWEGameCaptureComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void UpdateCamera(APawn* OldPawn, APawn* NewPawn);
    
    UFUNCTION(Reliable, Server)
    void ServerToggleFreeCam();
    
};

