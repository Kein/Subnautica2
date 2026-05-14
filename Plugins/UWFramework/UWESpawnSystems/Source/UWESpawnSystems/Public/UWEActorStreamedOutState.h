#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "UWEActorStreamedOutState.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FUWEActorStreamedOutState {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, Transient)
    TArray<UPrimitiveComponent*> ComponentsThatWereVisible;
    
    UPROPERTY(Transient)
    TMap<UPrimitiveComponent*, TEnumAsByte<ECollisionEnabled::Type>> ComponentsWithCollisionEnabled;
    
    UPROPERTY(Instanced, Transient)
    TArray<UPrimitiveComponent*> ComponentsWithPhysicsEnabled;
    
    UWESPAWNSYSTEMS_API FUWEActorStreamedOutState();
};

