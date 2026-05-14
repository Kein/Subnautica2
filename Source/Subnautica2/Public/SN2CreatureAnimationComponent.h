#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EUWEAIMovementVectorRelativeMode.h"
#include "EUWEAIMovementVectorSpace.h"
#include "EVolumeType.h"
#include "SN2AnimationComponent.h"
#include "SN2CreatureAnimationComponent.generated.h"

class AActor;
class UCurveFloat;
class USkeletalMeshComponent;
class UUWEAIMovementComponent;
class UUWEAIReplicationComponent;
class UUWESkeletalMeshComponentManaged;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2CreatureAnimationComponent : public USN2AnimationComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector AccelerationDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USkeletalMeshComponent* CachedSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UUWESkeletalMeshComponentManaged* CachedSkeletalMeshManaged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UUWEAIReplicationComponent* CachedRepComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UUWEAIMovementComponent* CachedAIMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator ActorRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform ActorTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector ActorForwardVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector ActorVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsSubmerged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EUWEAIMovementVectorSpace SteeringAccelerationVectorSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EUWEAIMovementVectorRelativeMode SteeringAccelerationRelativeMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag AnimationEventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EVolumeType VolumeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator LocalRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator LocalRotationDamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double AccelerationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector_NetQuantize SteeringAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector LocalAccelerationDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bNormalizeAccelerationVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector RelativeAngularVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double RelativeAngularSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector LocalVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* AccelerationConversionCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector LocalVelocityNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector LocalAccelerationDirectionNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator LocalRotationDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator LocalRotationDeltaDamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double AccelerationSpeedDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector AccelerationDirectionDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector RelativeAngularVelocityDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector LocalVelocityDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMapNormalizationToCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double SpeedDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector AccelerationDirectionPrev;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double AccelerationSpeedPrev;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator LocalRotationPrev;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform InnerRightAttachTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bTargetIsTadpole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bTentacleInnerRightAttached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCreatureHasTentacles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* TentacleTargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform TargetTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double DeltaSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bPrintValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDriveActorFromMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer GameplayTagContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DampenInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector VelocityNormalToCurrentMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double SpeedNormalToCurrentMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double SpeedNormalToCurrentMaxDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double AccelSpeedNormalToCurrentMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double AccelSpeedNormalToCurrentMaxDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double PlayerDistanceInnerRightAttach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AnimSyncBeginPoseSnapshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AnimSyncEndPoseSnapshot;
    
    USN2CreatureAnimationComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnVolumeTypeChanged(EVolumeType NewVolumeType);
    
};

