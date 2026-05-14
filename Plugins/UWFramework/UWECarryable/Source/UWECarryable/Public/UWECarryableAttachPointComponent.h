#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SphereComponent.h"
#include "UWEActorLifeCycle.h"
#include "UWESaveObject.h"
#include "UWECarryableAttachPointComponent.generated.h"

class AActor;
class UPrimitiveComponent;
class UUWESaveHandle;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWECARRYABLE_API UUWECarryableAttachPointComponent : public USphereComponent, public IUWESaveObject, public IUWEActorLifeCycle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
    UPROPERTY(ReplicatedUsing=OnRep_AttachedActor)
    TWeakObjectPtr<AActor> AttachedActor;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    TSoftClassPtr<AActor> CarryableActorClass;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    FGuid CarryableSaveGuid;
    
public:
    UUWECarryableAttachPointComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnRep_AttachedActor(TWeakObjectPtr<AActor> OldAttachedActor);
    
    UFUNCTION()
    void OnPostPickedUpItem(AActor* PickupActor);
    
    UFUNCTION()
    void OnPhysicsWake(UPrimitiveComponent* WakingComponent, FName BoneName);
    
    UFUNCTION()
    void OnOwnerDestroyed(AActor* DestroyedActor);
    
    UFUNCTION()
    void OnAttachedDestroyed(AActor* Actor);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsOccupied() const;
    
    UFUNCTION(BlueprintCallable)
    bool DetachCarryable();
    
    UFUNCTION(BlueprintCallable)
    bool AttachCarryable(AActor* Actor);
    

    // Fix for true pure virtual functions not being implemented
};

