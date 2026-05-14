#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UWEInventoryItem.h"
#include "SN2PlayerDeathbox.generated.h"

class UUWEInventoryComponent;

UCLASS()
class SUBNAUTICA2_API ASN2PlayerDeathbox : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UUWEInventoryComponent* InventoryComponent;
    
public:
    ASN2PlayerDeathbox(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool AddItem(const FUWEInventoryItem& Item);
    
};

