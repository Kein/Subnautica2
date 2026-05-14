#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "UWECommunalInventorySubsystem.generated.h"

class UUWEInventoryComponent;

UCLASS(BlueprintType)
class UWEINVENTORY_API UUWECommunalInventorySubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UUWEInventoryComponent>> CommunalInventories;
    
    UPROPERTY()
    TArray<int32> FreeIDs;
    
public:
    UUWECommunalInventorySubsystem();

    UFUNCTION(BlueprintCallable)
    void UnregisterInventory(UUWEInventoryComponent* InventoryComponent);
    
    UFUNCTION(BlueprintCallable)
    void RegisterInventory(UUWEInventoryComponent* InventoryComponent);
    
};

