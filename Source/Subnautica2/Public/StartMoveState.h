#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EStartMoveState.h"
#include "SN2BuilderGhostParams.h"
#include "SN2ConstructableParams.h"
#include "StartMoveState.generated.h"

USTRUCT(BlueprintType)
struct FStartMoveState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    EStartMoveState State;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform MovedActorTransform;
    
    UPROPERTY(BlueprintReadOnly)
    FSN2ConstructableParams ConstructableParams;
    
    UPROPERTY(BlueprintReadOnly)
    FSN2BuilderGhostParams GhostParams;
    
    SUBNAUTICA2_API FStartMoveState();
};

