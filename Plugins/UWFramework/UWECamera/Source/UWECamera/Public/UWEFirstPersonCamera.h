#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "Camera/CameraTypes.h"
#include "Templates/SubclassOf.h"
#include "UWEFirstPersonCamera.generated.h"

class UObject;
class USkeletalMeshComponent;
class UUWECameraAnimation;
class UUWEFirstPersonCamera;

UCLASS(ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UWECAMERA_API UUWEFirstPersonCamera : public UCameraComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TSubclassOf<UUWECameraAnimation>> AnimationClasses;
    
    UPROPERTY(Instanced)
    USkeletalMeshComponent* FirstPersonMesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName CameraSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAdjustMeshLocation;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bOverrideUseCameraSocketLocation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bOverrideUseCameraSocketRotation;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    TArray<UUWECameraAnimation*> ActiveAnimations;
    
private:
    UPROPERTY(VisibleAnywhere)
    TArray<TWeakObjectPtr<UObject>> LocationUnlocks;
    
    UPROPERTY(VisibleAnywhere)
    TArray<TWeakObjectPtr<UObject>> RotationUnlocks;
    
    UPROPERTY(VisibleAnywhere)
    FMinimalViewInfo DesiredView;
    
public:
    UUWEFirstPersonCamera(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartCinematicRotation(const UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    void StartCinematicLocation(const UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraLockTransitionTime(float InTransistionTime);
    
private:
    UFUNCTION()
    void OnAnimInitialized();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsCinematicRotation() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCinematicLocation() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCinematic() const;
    
    UFUNCTION(BlueprintCallable)
    void EndCinematicRotation(const UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    void EndCinematicLocation(const UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static void AddCameraAnimation(UUWEFirstPersonCamera* Camera, TSubclassOf<UUWECameraAnimation> AnimationClass);
    
};

