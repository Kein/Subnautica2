#pragma once
#include "CoreMinimal.h"
#include "UWEGreedyMeshPartition.generated.h"

class UStaticMeshComponent;

USTRUCT(BlueprintType)
struct FUWEGreedyMeshPartition {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UStaticMeshComponent* StaticMeshComponent;
    
    UWESCULPTURALBASE_API FUWEGreedyMeshPartition();
};

