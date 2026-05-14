#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "UWEWorldPopCreatureData.h"
#include "UWEPersistentCreatureSaveInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FUWEPersistentCreatureSaveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TSoftClassPtr<AActor> CreatureClass;
    
    UPROPERTY(SaveGame)
    FTransform Transform;
    
    UPROPERTY(SaveGame)
    float RespawnRangeSqr;
    
    UPROPERTY(SaveGame)
    uint8 bIsAwaitingRespawn: 1;
    
    UPROPERTY(SaveGame)
    uint8 bHandPlaced: 1;
    
    UPROPERTY(SaveGame)
    FGuid SourceRuleGuid;
    
    UPROPERTY(SaveGame)
    FGameplayTagContainer AllowEncroachingVolumeTags;
    
    UPROPERTY(SaveGame)
    FUWEWorldPopCreatureData CreatureData;
    
    UWEWORLDPOPULATION2_API FUWEPersistentCreatureSaveInfo();
};

