#pragma once
#include "CoreMinimal.h"
#include "UWECreaturesPendingDespawn.generated.h"

class AActor;

USTRUCT()
struct FUWECreaturesPendingDespawn {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<AActor*> Creatures;
    
    UWEWORLDPOPULATION2_API FUWECreaturesPendingDespawn();
};

