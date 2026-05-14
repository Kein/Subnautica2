#pragma once
#include "CoreMinimal.h"
#include "UWEAddedComponentsList_Old.generated.h"

class UActorComponent;

USTRUCT()
struct FUWEAddedComponentsList_Old {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    int32 Version;
    
    UPROPERTY(SaveGame)
    TArray<TSoftClassPtr<UActorComponent>> Classes;
    
    UWESPAWNSYSTEMS_API FUWEAddedComponentsList_Old();
};

