#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "SpinningScannerPointData.generated.h"

USTRUCT(BlueprintType)
struct FSpinningScannerPointData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    int32 UniqueSignalID;
    
    UPROPERTY(BlueprintReadWrite)
    FVector_NetQuantize position;
    
    UPROPERTY(BlueprintReadWrite)
    FVector_NetQuantize Color;
    
    UPROPERTY(BlueprintReadWrite)
    float DestroyTime;
    
    SUBNAUTICA2_API FSpinningScannerPointData();
};

