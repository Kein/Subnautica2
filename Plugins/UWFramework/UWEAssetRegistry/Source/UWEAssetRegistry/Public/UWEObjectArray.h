#pragma once
#include "CoreMinimal.h"
#include "UWEObjectArray.generated.h"

class UObject;

USTRUCT()
struct FUWEObjectArray {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UObject*> Objects;
    
    UWEASSETREGISTRY_API FUWEObjectArray();
};

