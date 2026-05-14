#pragma once
#include "CoreMinimal.h"
#include "UWENearbyActor.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FUWENearbyActor {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Name;
    
    UPROPERTY()
    FString Info;
    
    UPROPERTY()
    float Distance;
    
    UPROPERTY()
    bool bDone;
    
    UPROPERTY()
    FString CoordsString;
    
    UPROPERTY()
    AActor* Actor;
    
    SUBNAUTICA2_API FUWENearbyActor();
};

