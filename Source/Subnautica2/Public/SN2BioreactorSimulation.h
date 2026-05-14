#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEInventoryItem.h"
#include "UWEPowerGeneratorSimulation.h"
#include "ESN2BioreactorPowerConsumptionState.h"
#include "SN2BioreactorPowerConsumptionConfig.h"
#include "SN2BioreactorSimulation.generated.h"

class UUWEItemType;

UCLASS()
class SUBNAUTICA2_API USN2BioreactorSimulation : public UUWEPowerGeneratorSimulation {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPowerOutputChanged, float, Power);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemChanged, UUWEItemType*, ItemType);
    
    UPROPERTY(SaveGame)
    int32 InventoryId;
    
    UPROPERTY(SaveGame)
    UUWEItemType* CurrentItemType;
    
    UPROPERTY(SaveGame)
    FGameplayTagContainer AllowedItemTags;
    
    UPROPERTY(SaveGame)
    float PreConsumedPercentage;
    
    UPROPERTY(SaveGame)
    float CurrentDepletionStartGameplayTime;
    
    UPROPERTY(SaveGame)
    float CurrentDepletionEndGameplayTime;
    
    UPROPERTY(SaveGame)
    ESN2BioreactorPowerConsumptionState CurrentState;
    
    UPROPERTY(SaveGame)
    TMap<ESN2BioreactorPowerConsumptionState, FSN2BioreactorPowerConsumptionConfig> PowerConfig;
    
    UPROPERTY()
    FOnItemChanged OnItemChanged;
    
    UPROPERTY()
    FOnPowerOutputChanged OnPowerOutputChanged;
    
    USN2BioreactorSimulation();

private:
    UFUNCTION()
    void OnBioreactorInventoryItemAdded(const int32& SourceInventoryId, const FUWEInventoryItem& InventoryItem);
    
};

