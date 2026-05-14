#pragma once
#include "CoreMinimal.h"
#include "SN2InventoryActor.h"
#include "SN2Locker.generated.h"

class UUWEInventoryInteractionComponent;
class UUWEItemType;
class UUWEUGCComponent;

UCLASS()
class SUBNAUTICA2_API ASN2Locker : public ASN2InventoryActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEUGCComponent* UGCComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UUWEInventoryInteractionComponent* InventoryInteraction;
    
public:
    ASN2Locker(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    UUWEItemType* GetPrimaryItemType() const;
    
    UFUNCTION(BlueprintPure)
    float GetPercentageFull() const;
    
};

