#pragma once
#include "CoreMinimal.h"
#include "UWEStableIndexISM.generated.h"

class UInstancedStaticMeshComponent;

USTRUCT(BlueprintType)
struct FUWEStableIndexISM {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UInstancedStaticMeshComponent* ISM;
    
public:
    UWESCULPTURALBASE_API FUWEStableIndexISM();
};

