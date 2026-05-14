#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "UWEInventoryItem.h"
#include "UWEBaseRefundActor.generated.h"

class UUWEInventoryComponent;
class UUWESaveComponent;

UCLASS()
class UWESCULPTURALBASE_API AUWEBaseRefundActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UUWESaveComponent* SaveComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEInventoryComponent* InventoryComponent;
    
    UPROPERTY(SaveGame)
    FGuid PingGUID;
    
public:
    AUWEBaseRefundActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnItemRemoved(const FUWEInventoryItem& InventoryItem);
    
};

