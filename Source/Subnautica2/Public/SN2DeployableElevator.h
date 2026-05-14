#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/HitResult.h"
#include "Engine/TimerHandle.h"
#include "GameplayTagContainer.h"
#include "UWESaveCallbacks.h"
#include "SN2DeployableElevator.generated.h"

class AController;
class APawn;
class UObject;
class USceneComponent;
class USkeletalMeshComponent;
class UUWEInteractableStaticMesh;
class UUWEPawnAttachmentOwner;
class UUWESaveComponent;

UCLASS()
class SUBNAUTICA2_API ASN2DeployableElevator : public AActor, public IUWESaveCallbacks {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CallElevatorDelay;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UUWESaveComponent* SaveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UUWEPawnAttachmentOwner* PawnAttachmentOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USceneComponent* SceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USkeletalMeshComponent* ElevatorMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UUWEInteractableStaticMesh* ElevatorTube;
    
    UPROPERTY(BlueprintReadOnly, Replicated, SaveGame)
    float StoredLocation;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, ReplicatedUsing=OnRep_DestinationLocation)
    float DestinationLocation;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    float CurrentSpeed;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag MovementCueTag;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag CallCueTag;
    
private:
    UPROPERTY(SaveGame, ReplicatedUsing=OnRep_MaxDepth)
    float MaxDepth;
    
    UPROPERTY(EditAnywhere)
    float Speed;
    
    UPROPERTY()
    FTimerHandle CallElevatorTimerHandle;
    
public:
    ASN2DeployableElevator(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetMaxDepth(float InMaxDepth);
    
    UFUNCTION(BlueprintCallable)
    void SetDestinationLocation(float NewLocation);
    
private:
    UFUNCTION()
    void OnRep_MaxDepth();
    
protected:
    UFUNCTION()
    void OnRep_DestinationLocation();
    
private:
    UFUNCTION()
    void OnElevatorTubeInteracted(AController* Controller, APawn* Pawn, const FHitResult& HitResult);
    
    UFUNCTION()
    void OnDetachFinished(AActor* Actor, const FName& SlotName);
    
protected:
    UFUNCTION(BlueprintPure)
    float GetMinLocation() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxLocation() const;
    
    UFUNCTION(BlueprintPure)
    float GetLocationFraction() const;
    
public:
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetElevatorDepth(const UObject* WorldContextObject, AActor* Elevator, FVector StartingLocation, float InMaxDepth, float InTraceRadius, bool ShowDebug);
    
protected:
    UFUNCTION(BlueprintPure)
    float GetCurrentLocation() const;
    

    // Fix for true pure virtual functions not being implemented
};

