#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UWEBuilderAddedComponentsList.h"
#include "UWEBuilderActorSpawnInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct UWESPAWNSYSTEMS_API FUWEBuilderActorSpawnInfo {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FGuid ID;
    
    UPROPERTY(SaveGame)
    FGuid ParentID;
    
    UPROPERTY(SaveGame)
    FTransform Transform;
    
    UPROPERTY(SaveGame)
    TSoftClassPtr<AActor> Class;
    
    UPROPERTY(SaveGame)
    FUWEBuilderAddedComponentsList Components;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AActor> Actor;
    
    FUWEBuilderActorSpawnInfo();
};

