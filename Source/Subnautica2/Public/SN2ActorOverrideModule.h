#pragma once
#include "CoreMinimal.h"
#include "SN2ActorOverrideModuleCoords.h"
#include "SN2ActorOverrideModule.generated.h"

class UUWEBaseModule;

USTRUCT(BlueprintType)
struct FSN2ActorOverrideModule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UUWEBaseModule* Module;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSN2ActorOverrideModuleCoords> CoordsToSnapTo;
    
    SUBNAUTICA2_API FSN2ActorOverrideModule();
};

