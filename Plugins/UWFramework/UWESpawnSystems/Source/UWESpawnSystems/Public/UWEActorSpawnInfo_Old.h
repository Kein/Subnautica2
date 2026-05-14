#pragma once
#include "CoreMinimal.h"
#include "UWEAddedComponentsList_Old.h"
#include "UWEActorSpawnInfo_Old.generated.h"

USTRUCT()
struct FUWEActorSpawnInfo_Old {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FUWEAddedComponentsList_Old Components;
    
    UWESPAWNSYSTEMS_API FUWEActorSpawnInfo_Old();
};

