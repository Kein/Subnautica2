#pragma once
#include "CoreMinimal.h"
#include "UWEMovingWaterCurrentAffectedObject.generated.h"

class AActor;
class IUWEMovementComponent;
class UUWEMovementComponent;
class UPrimitiveComponent;

USTRUCT()
struct FUWEMovingWaterCurrentAffectedObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TWeakObjectPtr<AActor> Actor;
    
    UPROPERTY()
    TScriptInterface<IUWEMovementComponent> MovementComponent;
    
    UPROPERTY(Instanced)
    UPrimitiveComponent* OverlappedCollider;
    
    UWEWATERCURRENTS_API FUWEMovingWaterCurrentAffectedObject();
};

