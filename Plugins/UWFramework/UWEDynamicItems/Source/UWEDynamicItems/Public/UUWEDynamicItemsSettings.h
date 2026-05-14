#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "EUWEDynamicItemSpawnRange.h"
#include "UUWEDynamicItemsSettings.generated.h"

class AActor;

UCLASS(DefaultConfig, Config=UWEDynamicItems)
class UWEDYNAMICITEMS_API UUUWEDynamicItemsSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TMap<TSoftClassPtr<AActor>, TEnumAsByte<EUWEDynamicItemSpawnRange>> SpawnRangeByClass;
    
    UUUWEDynamicItemsSettings();

};

