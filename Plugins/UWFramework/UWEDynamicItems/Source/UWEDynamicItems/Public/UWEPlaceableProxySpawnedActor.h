#pragma once
#include "CoreMinimal.h"
#include "UWEPlaceableProxySpawnedActor.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FUWEPlaceableProxySpawnedActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool bHasBeenDestroyed;
    
    UPROPERTY(BlueprintReadOnly)
    AActor* SpawnedActor;
    
    UWEDYNAMICITEMS_API FUWEPlaceableProxySpawnedActor();
};

