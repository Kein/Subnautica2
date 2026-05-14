#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/PawnMovementComponent.h"
#include "Engine/NetSerialization.h"
#include "GameplayTagContainer.h"
#include "Mercuna3DMovementInterface.h"
#include "EUWEMovementComponentInfluenceType.h"
#include "UWEMovementComponent.h"
#include "EUWEAIMovementVectorRelativeMode.h"
#include "EUWEAIMovementVectorSpace.h"
#include "UWEAIMovementBaseCache.h"
#include "UWEAIMovementForceProportion.h"
#include "UWEAIMovementStoppingConfig.h"
#include "UWEAIMovementStyleCache.h"
#include "UWEStaticObstacleAvoidanceFilter.h"
#include "UWEAIMovementComponent.generated.h"

class USkeletalMeshComponent;
class UUWEAIMovementBaseSettings;
class UUWEAIMovementCircularMotionModule;
class UUWEAIMovementComponentGlobalSettings;
class UUWEAIMovementComponentSettings;
class UUWEAIMovementCoreModule;
class UUWEAIMovementCrawlingModule;
class UUWEAIMovementGroupingModule;
class UUWEAIMovementOscillatoryMotionModule;
class UUWEAIMovementSpeedAlterationModule;
class UUWEAIMovementSpiralHeightChangeModule;
class UUWEAIMovementStaticObstacleAvoidanceModule;
class UUWEAIMovementSwimmingModule;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEAIMOVEMENT_API UUWEAIMovementComponent : public UPawnMovementComponent, public IUWEMovementComponent, public IUWEStaticObstacleAvoidanceFilter, public IMercuna3DMovementInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UUWEAIMovementSwimmingModule* SwimmingModule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UUWEAIMovementCrawlingModule* CrawlingModule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UUWEAIMovementStaticObstacleAvoidanceModule* StaticObstacleAvoidanceModule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UUWEAIMovementOscillatoryMotionModule* OscillatoryMotionModule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UUWEAIMovementSpiralHeightChangeModule* SpiralHeightChangeModule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UUWEAIMovementCircularMotionModule* CircularMotionModule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UUWEAIMovementSpeedAlterationModule* SpeedAlterationModule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UUWEAIMovementGroupingModule* GroupingModule;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UUWEAIMovementComponentGlobalSettings* GlobalSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UUWEAIMovementBaseSettings* BaseSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_Settings)
    UUWEAIMovementComponentSettings* Settings;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FUWEAIMovementBaseCache BaseCache;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FUWEAIMovementStyleCache MovementStyleCache;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool AutoSetSettings;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleInstanceOnly)
    UUWEAIMovementCoreModule* CoreModule;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FUWEAIMovementForceProportion ForceProportion;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float DragProportion;
    
    UPROPERTY(Instanced, Transient)
    USkeletalMeshComponent* SkeletalMesh;
    
    UPROPERTY(Transient)
    float AnimRootMotionTranslationScale;
    
public:
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleInstanceOnly)
    FVector_NetQuantize RawSteeringAcceleration;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FVector_NetQuantize SteeringAcceleration;
    
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleInstanceOnly)
    FVector_NetQuantize RawAngularVelocity;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FVector_NetQuantize AngularVelocity;
    
    UUWEAIMovementComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateActorSizeData();
    
    UFUNCTION(BlueprintCallable)
    void StartMoveToLocation(const FVector& TargetLocation, float MoveToForceProportion, float ApproachDistance, const FUWEAIMovementStoppingConfig& InStoppingConfig);
    
    UFUNCTION(BlueprintCallable)
    void SetMoveToForceProportion(float InForceProportion);
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredSteeringDirection(const FVector& SteeringDirection);
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredLookDirection(const FVector& InLookDirection);
    
    UFUNCTION(BlueprintCallable)
    void SetBaseRotation(const FRotator& Rotation);
    
    UFUNCTION(BlueprintCallable)
    void ResetLookAtLocation();
    
protected:
    UFUNCTION()
    void OnRep_Settings();
    
public:
    UFUNCTION(BlueprintCallable)
    void MoveToLocation(const FVector& TargetLocation, float ApproachDistance);
    
    UFUNCTION(BlueprintCallable)
    void MoveInDesiredSteeringDirection(const FVector& SteeringDirection);
    
    UFUNCTION(BlueprintCallable)
    void LookAtLocation(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    bool IsSwimmingActive();
    
    UFUNCTION(BlueprintPure)
    bool IsMovementValid() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsCrawlingActive();
    
    UFUNCTION(BlueprintPure)
    FVector GetVelocityInLocalSpace();
    
    UFUNCTION(BlueprintPure)
    float GetTerminalVelocityMagnitudeWithForceProportion(float InForceProportion) const;
    
    UFUNCTION(BlueprintPure)
    float GetTerminalVelocityMagnitude();
    
    UFUNCTION(BlueprintPure)
    FVector GetSteeringAccelerationInLocalSpace();
    
    UFUNCTION(BlueprintPure)
    FVector GetSmoothedRelativeAngularVelocity();
    
    UFUNCTION(BlueprintPure)
    FVector GetRelativeVelocityInLocalSpace();
    
    UFUNCTION(BlueprintPure)
    FVector GetRelativeVelocity();
    
    UFUNCTION(BlueprintPure)
    FVector GetRelativeAngularVelocity();
    
    UFUNCTION(BlueprintCallable)
    FGameplayTag GetEnvironmentType();
    
    UFUNCTION(BlueprintPure)
    FRotator GetBaseRotation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetAnimationVelocityRelativeToOverallMaxInLocalSpace();
    
    UFUNCTION(BlueprintPure)
    FVector GetAnimationVelocityRelativeToOverallMax();
    
    UFUNCTION(BlueprintPure)
    FVector GetAnimationVelocityRelativeToCurrentMaxInLocalSpace();
    
    UFUNCTION(BlueprintPure)
    FVector GetAnimationVelocityRelativeToCurrentMax();
    
    UFUNCTION(BlueprintPure)
    FVector GetAnimationVelocityInLocalSpace();
    
    UFUNCTION(BlueprintPure)
    FVector GetAnimationVelocity(EUWEAIMovementVectorSpace VectorSpace, EUWEAIMovementVectorRelativeMode RelativeMode);
    
    UFUNCTION(BlueprintPure)
    FVector GetAnimationSteeringAccelerationInLocalSpace();
    
    UFUNCTION(BlueprintPure)
    FVector GetAnimationSteeringAcceleration(EUWEAIMovementVectorSpace VectorSpace, EUWEAIMovementVectorRelativeMode RelativeMode);
    
    UFUNCTION(BlueprintPure)
    float GetAnimationOverallMaxSteeringAcceleration() const;
    
    UFUNCTION(BlueprintPure)
    float GetAnimationOverallMaxSpeed() const;
    
    UFUNCTION(BlueprintPure)
    float GetAnimationCurrentMaxSteeringAcceleration() const;
    
    UFUNCTION(BlueprintPure)
    float GetAnimationCurrentMaxSpeed() const;
    
    UFUNCTION(BlueprintPure)
    FQuat GetAngularVelocityAsQuaternion();
    
    UFUNCTION(BlueprintCallable)
    void FinishMoveToLocation(const FVector& TargetLocation, float MoveToForceProportion, float ApproachDistance);
    
    UFUNCTION(BlueprintCallable)
    void ExternalDeltaMove(const FVector& DeltaMotion);
    
    UFUNCTION(BlueprintCallable)
    void EnforceSweepTestOnMove(bool Enforce);
    
    UFUNCTION(BlueprintCallable)
    void EditorOnly_Set2DMode(bool In2DMode);
    
    UFUNCTION(BlueprintCallable)
    bool CanSwim();
    
    UFUNCTION(BlueprintCallable)
    bool CanCrawl();
    
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
    void AddExternalInfluence(EUWEMovementComponentInfluenceType InfluenceType, const FVector& Value) override PURE_VIRTUAL(AddExternalInfluence,);
    
};

