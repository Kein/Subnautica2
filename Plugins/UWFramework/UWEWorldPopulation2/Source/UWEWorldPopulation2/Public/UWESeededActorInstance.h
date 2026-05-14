#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UWESeededActorInstance.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FUWESeededActorInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TSoftClassPtr<AActor> ActorClass;
    
    UPROPERTY(BlueprintReadOnly)
    FGuid RuleGUID;
    
    UPROPERTY(BlueprintReadOnly)
    FGuid ZoneGUID;
    
    UPROPERTY(BlueprintReadOnly)
    FSoftObjectPath ObjectPath;
    
    UWEWORLDPOPULATION2_API FUWESeededActorInstance();
};

