#pragma once
#include "CoreMinimal.h"
#include "UWESaveGameConversionContext.generated.h"

class UUWESaveGame;
class UUWESaveGameCollection;

USTRUCT()
struct UWESAVESYSTEM_API FUWESaveGameConversionContext {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UUWESaveGame*> SaveGames;
    
    UPROPERTY()
    UUWESaveGameCollection* SaveGameCollection;
    
    FUWESaveGameConversionContext();
};

