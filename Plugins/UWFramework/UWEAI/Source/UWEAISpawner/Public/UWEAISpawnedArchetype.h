#pragma once
#include "CoreMinimal.h"
#include "UWEAISpawnedArchetype.generated.h"

class UUWEAIArchetypeDataAsset;

USTRUCT(BlueprintType)
struct FUWEAISpawnedArchetype {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UUWEAIArchetypeDataAsset> ArchetypeConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Proportion;
    
private:
    UPROPERTY(Transient)
    UUWEAIArchetypeDataAsset* ArchetypeConfigPtr;
    
public:
    UWEAISPAWNER_API FUWEAISpawnedArchetype();
};

