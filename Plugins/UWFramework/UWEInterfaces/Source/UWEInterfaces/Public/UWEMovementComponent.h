#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "EUWEMovementComponentInfluenceType.h"
#include "UWEMovementComponent.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UWEINTERFACES_API UUWEMovementComponent : public UInterface {
    GENERATED_BODY()
};

class UWEINTERFACES_API IUWEMovementComponent : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void SetVelocity(const FVector& InVelocity) PURE_VIRTUAL(SetVelocity,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetMovementEnabled(bool Enabled) PURE_VIRTUAL(SetMovementEnabled,);
    
    UFUNCTION(BlueprintCallable)
    virtual FVector GetVelocity() PURE_VIRTUAL(GetVelocity, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    virtual float GetMass() PURE_VIRTUAL(GetMass, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual void ExternalDeltaMove(const FVector& DeltaMotion) PURE_VIRTUAL(ExternalDeltaMove,);
    
    UFUNCTION(BlueprintCallable)
    virtual void EnforceSweepTestOnMove(bool Enforce) PURE_VIRTUAL(EnforceSweepTestOnMove,);
    
    UFUNCTION(BlueprintCallable)
    virtual void AddExternalVelocity(const FVector& Velocity) PURE_VIRTUAL(AddExternalVelocity,);
    
    UFUNCTION(BlueprintCallable)
    virtual void AddExternalInfluence(EUWEMovementComponentInfluenceType InfluenceType, const FVector& Value) PURE_VIRTUAL(AddExternalInfluence,);
    
    UFUNCTION(BlueprintCallable)
    virtual void AddExternalImpulse(const FVector& Impulse) PURE_VIRTUAL(AddExternalImpulse,);
    
    UFUNCTION(BlueprintCallable)
    virtual void AddExternalForce(const FVector& Force) PURE_VIRTUAL(AddExternalForce,);
    
    UFUNCTION(BlueprintCallable)
    virtual void AddExternalAcceleration(const FVector& Acceleration) PURE_VIRTUAL(AddExternalAcceleration,);
    
};

