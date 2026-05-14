#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEPlayerMetaData.generated.h"

USTRUCT(BlueprintType)
struct FUWEPlayerMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    int32 PlayerId;
    
    UPROPERTY(SaveGame)
    FGuid PlayerStateId;
    
    UPROPERTY(SaveGame)
    FGuid PlayerCharacterId;
    
    UPROPERTY(SaveGame)
    FGuid PlayerControllerId;
    
    UWESAVESYSTEM_API FUWEPlayerMetaData();
};

