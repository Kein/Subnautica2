#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEAttachedActorList.h"
#include "UWEBuilderActorSpawnInfo.h"
#include "UWEBuilderItemsSave.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FUWEBuilderItemsSave {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TMap<FGuid, FUWEBuilderActorSpawnInfo> Items;
    
    UPROPERTY(Transient)
    TMap<AActor*, FUWEAttachedActorList> PendingParents;
    
    UWESPAWNSYSTEMS_API FUWEBuilderItemsSave();
};

