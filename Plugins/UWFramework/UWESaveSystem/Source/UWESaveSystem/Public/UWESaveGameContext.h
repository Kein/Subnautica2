#pragma once
#include "CoreMinimal.h"
#include "UWESaveGameContext.generated.h"

class UUWESaveGame;
class UUWESaveGameCollection;

USTRUCT(BlueprintType)
struct UWESAVESYSTEM_API FUWESaveGameContext {
    GENERATED_BODY()
public:
    UPROPERTY()
    UUWESaveGame* ActiveSave;
    
private:
    UPROPERTY()
    UUWESaveGameCollection* SaveGameCollection;
    
public:
    FUWESaveGameContext();
};

