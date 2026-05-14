#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AbilityInfo.h"
#include "SN2BuilderActionAbility.h"
#include "SN2BuilderConstructionInfoProvider.h"
#include "SN2BuilderGhostParams.h"
#include "SN2ConstructableParams.h"
#include "SN2GhostPlacement.h"
#include "StartMoveState.h"
#include "SN2BuilderMoveAbility.generated.h"

class AActor;
class ASN2BuilderGhost;
class USN2AbilityTask_UpdateMoveSelection;

UCLASS()
class SUBNAUTICA2_API USN2BuilderMoveAbility : public USN2BuilderActionAbility, public IAbilityInfo, public ISN2BuilderConstructionInfoProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    ASN2BuilderGhost* Ghost;
    
    UPROPERTY(BlueprintReadWrite)
    TWeakObjectPtr<AActor> MoveActor;
    
    UPROPERTY()
    FGuid MoveActorId;
    
    UPROPERTY()
    FStartMoveState StartMoveState;
    
protected:
    UPROPERTY(ReplicatedUsing=OnRep_PlaceholderGhost)
    ASN2BuilderGhost* PlaceholderGhost;
    
    UPROPERTY(BlueprintReadWrite)
    USN2AbilityTask_UpdateMoveSelection* UpdateSelectionTask;
    
public:
    USN2BuilderMoveAbility();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SpawnPlacementGhost(FSN2BuilderGhostParams GhostParams, FSN2ConstructableParams ConstructableParams);
    
    UFUNCTION(Reliable, Server)
    void ServerStartMove(AActor* InMoveActor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerMove(FTransform Transform, FRotator FRotator, FSN2GhostPlacement GhostPlacement);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerCancelMove();
    
protected:
    UFUNCTION()
    void OnRep_PlaceholderGhost();
    
public:
    UFUNCTION(Client, Reliable)
    void ClientSetStartMoveState(const FStartMoveState MoveState);
    
    UFUNCTION(BlueprintPure)
    bool AbilityIsActive() const;
    

    // Fix for true pure virtual functions not being implemented
};

