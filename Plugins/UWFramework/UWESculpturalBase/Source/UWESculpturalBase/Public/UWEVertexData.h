#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEVertexData.generated.h"

USTRUCT()
struct FUWEVertexData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector position;
    
    UPROPERTY()
    FVector Normal;
    
    UWESCULPTURALBASE_API FUWEVertexData();
};

