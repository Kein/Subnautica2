#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "UWEWorldPopResourceInterfaceSpawnSettings.h"
#include "UWESeededResourceInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FUWESeededResourceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FTransform Transform;
    
    UPROPERTY(BlueprintReadOnly)
    TSoftClassPtr<AActor> ResourceClass;
    
    UPROPERTY(BlueprintReadOnly)
    FGuid ResourceGUID;
    
    UPROPERTY(BlueprintReadOnly)
    FGuid RuleGUID;
    
    UPROPERTY(BlueprintReadOnly)
    FGuid ZoneGUID;
    
    UPROPERTY(BlueprintReadOnly)
    bool HandPlaced;
    
    UPROPERTY(BlueprintReadOnly)
    float TimeToRespawnSeconds;
    
    UPROPERTY(BlueprintReadOnly)
    float SpawnRangeMultiplier;
    
    UPROPERTY(BlueprintReadOnly)
    ESpawnActorCollisionHandlingMethod CollisionHandlingMethod;
    
    UPROPERTY(BlueprintReadOnly)
    FUWEWorldPopResourceInterfaceSpawnSettings ResourceInterfaceSpawnSettings;
    
    UWEWORLDPOPULATION2_API FUWESeededResourceInfo();
};

