#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWERuntimeResourceInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FUWERuntimeResourceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FTransform Transform;
    
    UPROPERTY(BlueprintReadOnly)
    TSoftObjectPtr<AActor> SpawnedResource;
    
    UPROPERTY(BlueprintReadOnly)
    bool HasFailedToSpawn;
    
    UPROPERTY(BlueprintReadOnly)
    float TimeToRespawnSeconds;
    
    UWEWORLDPOPULATION2_API FUWERuntimeResourceInfo();
};

