#pragma once
#include "CoreMinimal.h"
#include "ESkyEvent.h"
#include "SkyPayloadForce.h"
#include "SkyPayloadTransition.h"
#include "SkyPayload.generated.h"

USTRUCT(BlueprintType)
struct UWESKY_API FSkyPayload {
    GENERATED_BODY()
public:
    UPROPERTY()
    ESkyEvent SkyEvent;
    
    UPROPERTY()
    FName OwnerName;
    
    UPROPERTY()
    FSkyPayloadTransition SkyPayloadTransition;
    
    UPROPERTY()
    FSkyPayloadForce SkyPayloadForce;
    
    FSkyPayload();
};

