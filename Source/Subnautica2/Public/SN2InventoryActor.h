#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LockerStartupItem.h"
#include "SN2InventoryActor.generated.h"

class UStaticMeshComponent;
class UUWEInventoryComponent;
class UUWESaveComponent;

UCLASS()
class SUBNAUTICA2_API ASN2InventoryActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FLockerStartupItem> StartupItems;
    
protected:
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UUWEInventoryComponent* Inventory;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UUWESaveComponent* SaveComponent;
    
private:
    UPROPERTY(SaveGame)
    bool bStartupItemsHaveBeenAdded;
    
public:
    ASN2InventoryActor(const FObjectInitializer& ObjectInitializer);

};

