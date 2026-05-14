#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/TimerHandle.h"
#include "UWESaveObject.h"
#include "SN2GhostPlacement.h"
#include "SN2MovableComponent.generated.h"

class AActor;
class ASN2BuilderGhost;
class UUWESaveHandle;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2MovableComponent : public UActorComponent, public IUWESaveObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStartMove);
    
    UPROPERTY(BlueprintAssignable)
    FOnStartMove OnStartMove;
    
    UPROPERTY(BlueprintReadOnly)
    ASN2BuilderGhost* MovePlaceholderGhost;
    
protected:
    UPROPERTY()
    FText Name;
    
    UPROPERTY()
    FTimerHandle PhysicsUpdateTimer;
    
    UPROPERTY(Replicated)
    bool MoveStarted;
    
    UPROPERTY(SaveGame, ReplicatedUsing=OnRep_Placement)
    FSN2GhostPlacement Placement;
    
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
public:
    USN2MovableComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool StartMove();
    
protected:
    UFUNCTION()
    void OnRep_Placement();
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void MulticastNotifyMoveStarted();
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticaseUpdatePhysics(AActor* MovedActor);
    
    UFUNCTION(BlueprintCallable)
    void Move(FTransform Transform, FRotator FRotator, FSN2GhostPlacement GhostPlacement);
    
    UFUNCTION(BlueprintPure)
    bool IsMoving() const;
    
    UFUNCTION(BlueprintPure)
    static FSN2GhostPlacement GetPlacementForActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void CancelMove();
    
    UFUNCTION(BlueprintCallable)
    bool CanBeMoved();
    

    // Fix for true pure virtual functions not being implemented
};

