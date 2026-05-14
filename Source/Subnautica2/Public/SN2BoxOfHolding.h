#pragma once
#include "CoreMinimal.h"
#include "Interactable.h"
#include "UWEBaseItem.h"
#include "SN2BoxOfHolding.generated.h"

class UStaticMeshComponent;
class UUWEInventoryComponent;

UCLASS()
class SUBNAUTICA2_API ASN2BoxOfHolding : public AUWEBaseItem, public IInteractable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UStaticMeshComponent* MainMesh;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEInventoryComponent* InventoryComponent;
    
    ASN2BoxOfHolding(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintNativeEvent)
    void HandleInventoryEmptied();
    

    // Fix for true pure virtual functions not being implemented
};

