#pragma once
#include "CoreMinimal.h"
#include "UWEBuilderAddedComponentData.generated.h"

class UActorComponent;

USTRUCT(BlueprintType)
struct UWESPAWNSYSTEMS_API FUWEBuilderAddedComponentData {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TSoftClassPtr<UActorComponent> Class;
    
    UPROPERTY(SaveGame)
    FString ComponentName;
    
    FUWEBuilderAddedComponentData();
};

