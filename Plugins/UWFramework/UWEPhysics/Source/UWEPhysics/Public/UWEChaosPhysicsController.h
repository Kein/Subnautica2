#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EUWEMovementComponentInfluenceType.h"
#include "UWEMovementComponent.h"
#include "EVolumeType.h"
#include "EUWEChaosPhysicsControllerBuoyancyMode.h"
#include "UWEChaosPhysicsControllerEnvironmentSettings.h"
#include "UWEChaosPhysicsController.generated.h"

class UPrimitiveComponent;
class UVolumeTrackerComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEPHYSICS_API UUWEChaosPhysicsController : public UActorComponent, public IUWEMovementComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UPrimitiveComponent* PhysicsComponent;
    
    UPROPERTY(Instanced)
    UVolumeTrackerComponent* VolumeTrackerComponent;
    
public:
    UPROPERTY(EditAnywhere)
    FUWEChaosPhysicsControllerEnvironmentSettings AirSettings;
    
    UPROPERTY(EditAnywhere)
    FUWEChaosPhysicsControllerEnvironmentSettings WaterSettings;
    
    UPROPERTY(EditAnywhere)
    EUWEChaosPhysicsControllerBuoyancyMode BuoyancyMode;
    
    UPROPERTY(EditAnywhere)
    float VolumeMultiplier;
    
    UPROPERTY(EditAnywhere)
    bool SetMassOutOfBuoyancyForce;
    
    UPROPERTY(EditAnywhere)
    float SetMassOutOfBuoyancyForceGravityMultiplier;
    
    UPROPERTY(EditAnywhere)
    bool WeldedBodiesDoNotAffectRequiredBuoyancy;
    
    UPROPERTY(EditAnywhere)
    float BespokeBuoyancyAcceleration;
    
    UUWEChaosPhysicsController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPhysicsEnabled(bool Enabled);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetEnvironmentSettings(const FUWEChaosPhysicsControllerEnvironmentSettings& EnvironmentSetting);
    
    UFUNCTION()
    void OnVolumeTypeChanged(EVolumeType VolumeType);
    
public:
    UFUNCTION(BlueprintPure)
    FVector GetBodySize() const;
    
    UFUNCTION(BlueprintPure)
    FBox GetBodyBounds() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceToSleep();
    
    UFUNCTION(BlueprintCallable)
    void AddVelocity(const FVector& Velocity);
    
    UFUNCTION(BlueprintCallable)
    void AddImpulseAtPosition(const FVector& Impulse, const FVector& position);
    
    UFUNCTION(BlueprintCallable)
    void AddImpulse(const FVector& Impulse);
    
    UFUNCTION(BlueprintCallable)
    void AddForceAtPosition(const FVector& Force, const FVector& position);
    
    UFUNCTION(BlueprintCallable)
    void AddForce(const FVector& Force);
    
    UFUNCTION(BlueprintCallable)
    void AddAcceleration(const FVector& Acceleration);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void SetVelocity(const FVector& InVelocity) override PURE_VIRTUAL(SetVelocity,);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementEnabled(bool Enabled) override PURE_VIRTUAL(SetMovementEnabled,);
    
    UFUNCTION(BlueprintCallable)
    FVector GetVelocity() override PURE_VIRTUAL(GetVelocity, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    float GetMass() override PURE_VIRTUAL(GetMass, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    void ExternalDeltaMove(const FVector& DeltaMotion) override PURE_VIRTUAL(ExternalDeltaMove,);
    
    UFUNCTION(BlueprintCallable)
    void EnforceSweepTestOnMove(bool Enforce) override PURE_VIRTUAL(EnforceSweepTestOnMove,);
    
    UFUNCTION(BlueprintCallable)
    void AddExternalVelocity(const FVector& Velocity) override PURE_VIRTUAL(AddExternalVelocity,);
    
    UFUNCTION(BlueprintCallable)
    void AddExternalInfluence(EUWEMovementComponentInfluenceType InfluenceType, const FVector& Value) override PURE_VIRTUAL(AddExternalInfluence,);
    
    UFUNCTION(BlueprintCallable)
    void AddExternalImpulse(const FVector& Impulse) override PURE_VIRTUAL(AddExternalImpulse,);
    
    UFUNCTION(BlueprintCallable)
    void AddExternalForce(const FVector& Force) override PURE_VIRTUAL(AddExternalForce,);
    
    UFUNCTION(BlueprintCallable)
    void AddExternalAcceleration(const FVector& Acceleration) override PURE_VIRTUAL(AddExternalAcceleration,);
    
};

