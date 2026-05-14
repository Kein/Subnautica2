#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "UWEWorldPopCreatureData.h"
#include "UWESeededCreatureInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FUWESeededCreatureInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FTransform Transform;
    
    UPROPERTY(BlueprintReadOnly)
    TSoftClassPtr<AActor> CreatureClass;
    
    UPROPERTY(BlueprintReadOnly)
    FUWEWorldPopCreatureData CreatureData;
    
    UPROPERTY(BlueprintReadOnly)
    float SpawnRangeMultiplier;
    
    UPROPERTY(BlueprintReadOnly)
    FGuid ResourceGUID;
    
    UPROPERTY(BlueprintReadOnly)
    FGuid RuleGUID;
    
    UPROPERTY(BlueprintReadOnly)
    FGuid ZoneGUID;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 HandPlaced: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 bIsPersistent: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 bAutomaticSpawn: 1;
    
    UPROPERTY(BlueprintReadOnly)
    FString FeatureFlag;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 bPublished: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer AllowEncroachingVolumeTags;
    
    UWEWORLDPOPULATION2_API FUWESeededCreatureInfo();
};

