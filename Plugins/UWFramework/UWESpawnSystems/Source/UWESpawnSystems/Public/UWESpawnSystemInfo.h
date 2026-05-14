#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EUWESpawnSystem.h"
#include "UWESpawnSystemInfo.generated.h"

USTRUCT(BlueprintType)
struct UWESPAWNSYSTEMS_API FUWESpawnSystemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, SaveGame)
    EUWESpawnSystem SpawnSystem;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FGuid ActorID;
    
    FUWESpawnSystemInfo();
};

