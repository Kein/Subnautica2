#pragma once
#include "CoreMinimal.h"
#include "UWESaveCollectionContext.generated.h"

class UUWESaveGameCollection;

USTRUCT()
struct UWESAVESYSTEM_API FUWESaveCollectionContext {
    GENERATED_BODY()
public:
    UPROPERTY()
    UUWESaveGameCollection* SaveGameCollection;
    
    FUWESaveCollectionContext();
};

