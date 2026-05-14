#pragma once
#include "CoreMinimal.h"
#include "UWEWorldPopCreatureData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FUWEWorldPopCreatureData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 ScaleDeviationPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 MinGroupSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 MaxGroupSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<TSoftClassPtr<AActor>> GroupTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool IgnoreCollisionBetweenMembers;
    
    UWEINTERFACES_API FUWEWorldPopCreatureData();
};

