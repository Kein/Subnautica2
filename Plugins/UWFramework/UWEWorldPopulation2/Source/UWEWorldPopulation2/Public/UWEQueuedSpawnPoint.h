#pragma once
#include "CoreMinimal.h"
#include "UWESeededCreatureInfo.h"
#include "UWEQueuedSpawnPoint.generated.h"

USTRUCT(BlueprintType)
struct FUWEQueuedSpawnPoint {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 SpawnInfoId;
    
    UPROPERTY()
    FUWESeededCreatureInfo CreatureInfo;
    
    UWEWORLDPOPULATION2_API FUWEQueuedSpawnPoint();
};

