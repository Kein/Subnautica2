#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/NetSerialization.h"
#include "EUWEMovementComponentInfluenceType.h"
#include "UWEMovementComponent.h"
#include "UWENetworkSmoothingInterface.h"
#include "EUWECharacterMovementComponentBasePhysicsInteractionMethod.h"
#include "UWECharacterMovementComponentBasePhysicsInteractionSettings.h"
#include "UWECharacterMovementComponentBase.generated.h"

class UVolumeTrackerComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEMOVEMENT_API UUWECharacterMovementComponentBase : public UCharacterMovementComponent, public IUWEMovementComponent, public IUWENetworkSmoothingInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(ReplicatedUsing=OnRep_ReplicatedAcceleration)
    FVector_NetQuantize ReplicatedAcceleration;
    
public:
    UPROPERTY(Instanced)
    UVolumeTrackerComponent* VolumeTracker;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnableUWEClientMoveErrorHandling;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MAXPOSITIONERRORSQUARED;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ClientAuthorativePosition;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ClientAuthoritativeOnMovementMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ForceTimeStampSyncWithClientDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EUWECharacterMovementComponentBasePhysicsInteractionMethod PhysicsInteractionMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWECharacterMovementComponentBasePhysicsInteractionSettings AirPhysicsInteractionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWECharacterMovementComponentBasePhysicsInteractionSettings WaterPhysicsInteractionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool RestrictAmountOfImpactForcesPerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ApplyImpactPhysicsForcesMaxInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ShiftImpactPointTowardsMassCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ShiftImpactPointTowardsMassCenterVolumeRestriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ShiftAmountOfImpactPointTowardsMassCenter;
    
    UUWECharacterMovementComponentBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnTrackedVolumesChanged();
    
    UFUNCTION()
    void OnRep_ReplicatedAcceleration();
    
public:
    UFUNCTION(BlueprintPure)
    FVector GetAcceleration() const;
    
    UFUNCTION(BlueprintCallable)
    void ExternalDeltaMove(const FVector& DeltaMotion);
    
    UFUNCTION(BlueprintCallable)
    void EnforceSweepTestOnMove(bool Enforce);
    
    UFUNCTION(BlueprintCallable)
    void AddExternalVelocity(const FVector& InVelocity);
    
    UFUNCTION(BlueprintCallable)
    void AddExternalImpulse(const FVector& Impulse);
    
    UFUNCTION(BlueprintCallable)
    void AddExternalForce(const FVector& Force);
    
    UFUNCTION(BlueprintCallable)
    void AddExternalAcceleration(const FVector& InAcceleration);
    

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
    void AddExternalInfluence(EUWEMovementComponentInfluenceType InfluenceType, const FVector& Value) override PURE_VIRTUAL(AddExternalInfluence,);
    
};

