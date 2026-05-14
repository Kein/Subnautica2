#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "GameFramework/NavMovementComponent.h"
#include "EUWEMovementComponentInfluenceType.h"
#include "UWEMovementComponent.h"
#include "SubmarineInput.h"
#include "UWESubmarineMovementComponent.generated.h"

class UVolumeTrackerComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEMOVEMENT_API UUWESubmarineMovementComponent : public UNavMovementComponent, public IUWEMovementComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSteering);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCollisionImminent, bool, bNewCollisionImminent);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    FVector AngularVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float MaxAngularSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float RotationSpeedMultiplier;
    
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleAnywhere)
    FVector ReplicatedVelocity;
    
    UPROPERTY(Instanced)
    UVolumeTrackerComponent* VolumeTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Mass;
    
    UPROPERTY(BlueprintAssignable)
    FOnCollisionImminent OnCollisionImminent;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FHitResult> PredictedHits;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsCloseToGround;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bCollisionImminent;
    
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleAnywhere)
    bool bAutoSpeedEnabled;
    
protected:
    UPROPERTY(VisibleAnywhere)
    FSubmarineInput CurrentInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ForwardAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VerticalAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StrafeAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Drag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AngularAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AngularDrag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxPitch;
    
    UPROPERTY(BlueprintAssignable)
    FOnSteering OnSteeringBegin;
    
    UPROPERTY(BlueprintAssignable)
    FOnSteering OnSteeringEnd;
    
    UPROPERTY(VisibleAnywhere)
    bool bSinking;
    
    UPROPERTY(VisibleAnywhere)
    bool bRollPitchCorrectionEnabled;
    
public:
    UUWESubmarineMovementComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool ToggleRandomAutoPilot();
    
    UFUNCTION(BlueprintCallable)
    void ToggleAutoSpeed();
    
    UFUNCTION(BlueprintCallable)
    void StopMovement();
    
    UFUNCTION(BlueprintPure)
    bool IsSteering() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetPredictedHitLocation();
    
    UFUNCTION(BlueprintCallable)
    void ExternalDeltaMove(const FVector& DeltaMotion);
    
    UFUNCTION(BlueprintCallable)
    void DoRandomInput();
    
    UFUNCTION(BlueprintCallable)
    void AddInput(FVector Direction, FVector Rotation);
    
    UFUNCTION(BlueprintCallable)
    void AddExternalVelocity(const FVector& InVelocity);
    
    UFUNCTION(BlueprintCallable)
    void AddExternalImpulse(const FVector& Impulse);
    
    UFUNCTION(BlueprintCallable)
    void AddExternalForce(const FVector& Force);
    
    UFUNCTION(BlueprintCallable)
    void AddExternalAcceleration(const FVector& Acceleration);
    

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
    void EnforceSweepTestOnMove(bool Enforce) override PURE_VIRTUAL(EnforceSweepTestOnMove,);
    
    UFUNCTION(BlueprintCallable)
    void AddExternalInfluence(EUWEMovementComponentInfluenceType InfluenceType, const FVector& Value) override PURE_VIRTUAL(AddExternalInfluence,);
    
};

