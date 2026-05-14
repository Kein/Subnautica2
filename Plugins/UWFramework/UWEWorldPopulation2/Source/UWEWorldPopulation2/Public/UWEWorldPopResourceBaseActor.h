#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "UWECustomActorUIDInterface.h"
#include "UWEBreakableInterface.h"
#include "UWEInventoryItemInterface.h"
#include "UWEPersistentPickupInterface.h"
#include "UWEOnResourceGatheredDelegateDelegate.h"
#include "UWEResourceActorSourceInfo.h"
#include "UWEWorldPopResourceBaseActor.generated.h"

class UStaticMeshComponent;
class UUWEAssetDataComponent;

UCLASS(Abstract)
class UWEWORLDPOPULATION2_API AUWEWorldPopResourceBaseActor : public AActor, public IUWEPersistentPickupInterface, public IUWECustomActorUIDInterface, public IUWEBreakableInterface, public IUWEInventoryItemInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FUWEOnResourceGatheredDelegate OnResourceGathered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsBreakingDisabled;
    
protected:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, ReplicatedUsing=OnRep_HasBeenGathered)
    uint8 bHasBeenGathered: 1;
    
    UPROPERTY(NonPIEDuplicateTransient, VisibleInstanceOnly)
    FGuid ResourceId;
    
    UPROPERTY(VisibleAnywhere)
    uint8 bHasBeenModified: 1;
    
    UPROPERTY(VisibleAnywhere)
    FUWEResourceActorSourceInfo SourceInfo;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UStaticMeshComponent* StaticMesh;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEAssetDataComponent* AssetData;
    
public:
    AUWEWorldPopResourceBaseActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnRep_HasBeenGathered();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHasBeenGathered();
    

    // Fix for true pure virtual functions not being implemented
};

