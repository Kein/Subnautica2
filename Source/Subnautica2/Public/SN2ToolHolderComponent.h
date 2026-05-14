#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "Interactable.h"
#include "UWESaveObject.h"
#include "OnActorPlacedDelegate.h"
#include "OnActorTakenDelegate.h"
#include "SN2ToolHolderComponent.generated.h"

class AActor;
class UUWESaveHandle;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2ToolHolderComponent : public UStaticMeshComponent, public IInteractable, public IUWESaveObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnActorTaken OnActorTaken;
    
    UPROPERTY(BlueprintAssignable)
    FOnActorPlaced OnActorPlaced;
    
protected:
    UPROPERTY(EditAnywhere)
    bool AllowPlacing;
    
    UPROPERTY(Instanced)
    UStaticMeshComponent* AttachedItemMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<AActor> StartupItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SocketName;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_AttachedActor)
    AActor* AttachedActor;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UUWESaveHandle* SaveHandle;
    
private:
    UPROPERTY(SaveGame)
    bool bActorRemoved;
    
public:
    USN2ToolHolderComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnRep_AttachedActor();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsEmpty() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetAttachedActor() const;
    
    UFUNCTION(BlueprintCallable)
    bool AttachItemByActor(AActor* Actor);
    

    // Fix for true pure virtual functions not being implemented
};

