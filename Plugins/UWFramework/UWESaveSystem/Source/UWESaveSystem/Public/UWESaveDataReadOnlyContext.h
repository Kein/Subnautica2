#pragma once
#include "CoreMinimal.h"
#include "UWESaveDataReadOnlyContext.generated.h"

class UUWESaveGame;

USTRUCT()
struct UWESAVESYSTEM_API FUWESaveDataReadOnlyContext {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UUWESaveGame* SaveGame;
    
public:
    FUWESaveDataReadOnlyContext();
};

