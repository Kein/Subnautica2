#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEDynamicItemInfo.generated.h"

class AActor;

USTRUCT()
struct FUWEDynamicItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FTransform Transform;
    
    UPROPERTY(SaveGame)
    TSoftClassPtr<AActor> Class;
    
    UPROPERTY(SaveGame)
    double Timestamp;
    
    UPROPERTY(SaveGame)
    double LifeSpan;
    
    UPROPERTY(SaveGame)
    bool bRemoveIfOutOfRange;
    
    UPROPERTY(SaveGame)
    bool bWasSimulatingPhysics;
    
    UPROPERTY()
    AActor* Actor;
    
    UWEDYNAMICITEMS_API FUWEDynamicItemInfo();
};

