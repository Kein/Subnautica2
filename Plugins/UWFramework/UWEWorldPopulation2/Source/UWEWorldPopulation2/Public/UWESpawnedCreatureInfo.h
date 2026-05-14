#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEWorldPopCreatureData.h"
#include "UWESpawnedCreatureInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FUWESpawnedCreatureInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FTransform SpawnTransform;
    
    UPROPERTY(BlueprintReadOnly)
    TSoftClassPtr<AActor> CreatureType;
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<AActor> SpawnedCreature;
    
    UPROPERTY(BlueprintReadOnly)
    FUWEWorldPopCreatureData CreatureData;
    
    UPROPERTY(BlueprintReadOnly)
    float DespawnRange;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 bIsPersistent: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 bHandPlaced: 1;
    
    UWEWORLDPOPULATION2_API FUWESpawnedCreatureInfo();
};

