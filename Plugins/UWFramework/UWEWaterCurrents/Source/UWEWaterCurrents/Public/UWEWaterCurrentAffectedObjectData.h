#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEWaterCurrentAffectedObjectData.generated.h"

class IUWEMovementComponent;
class UUWEMovementComponent;
class UActorComponent;
class UUWEMovementSetComponent;

USTRUCT(BlueprintType)
struct FUWEWaterCurrentAffectedObjectData {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UActorComponent* ActorComponent;
    
    UPROPERTY()
    TScriptInterface<IUWEMovementComponent> MovementComponent;
    
    UPROPERTY(Instanced)
    UUWEMovementSetComponent* MovementSetComponent;
    
    UPROPERTY()
    FVector LastAppliedVelocity;
    
    UWEWATERCURRENTS_API FUWEWaterCurrentAffectedObjectData();
};

