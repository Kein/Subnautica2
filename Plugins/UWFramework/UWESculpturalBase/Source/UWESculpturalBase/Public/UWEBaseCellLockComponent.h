#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "UWESaveObject.h"
#include "UWEBuilderItemRemovalHandlerInterface.h"
#include "UWEBaseCellLockComponent.generated.h"

class AUWESculpturalBaseActor;
class UUWESaveHandle;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWESCULPTURALBASE_API UUWEBaseCellLockComponent : public UActorComponent, public IUWESaveObject, public IUWEBuilderItemRemovalHandlerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(SaveGame, ReplicatedUsing=OnRep_BaseGuid)
    FGuid BaseGUID;
    
    UPROPERTY(Replicated, SaveGame)
    int32 LockGroupID;
    
    UPROPERTY(SaveGame, ReplicatedUsing=OnRep_OwnerGuid)
    FGuid OwnerGuid;
    
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
public:
    UUWEBaseCellLockComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnRep_OwnerGuid();
    
    UFUNCTION()
    void OnRep_BaseGuid();
    
    UFUNCTION()
    void OnBasesReplicated();
    
public:
    UFUNCTION(BlueprintPure)
    TSet<FIntVector> GetLockedCells() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetCenterCellBrushType() const;
    
    UFUNCTION(BlueprintPure)
    FIntVector GetCenterCell() const;
    
    UFUNCTION(BlueprintPure)
    AUWESculpturalBaseActor* GetBase() const;
    

    // Fix for true pure virtual functions not being implemented
};

