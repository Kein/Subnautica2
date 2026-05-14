#pragma once
#include "CoreMinimal.h"
#include "UWEOverlapExpellerAffectedObject.generated.h"

class AActor;
class IUWEMovementComponent;
class UUWEMovementComponent;
class UPrimitiveComponent;

USTRUCT()
struct FUWEOverlapExpellerAffectedObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TWeakObjectPtr<AActor> Actor;
    
    UPROPERTY()
    TScriptInterface<IUWEMovementComponent> MovementComponent;
    
    UPROPERTY(Instanced)
    UPrimitiveComponent* OverlappedComponent;
    
    UWEPHYSICS_API FUWEOverlapExpellerAffectedObject();
};

