#pragma once
#include "CoreMinimal.h"
#include "MercunaTrackRequest.generated.h"

class AActor;

USTRUCT()
struct MERCUNA_API FMercunaTrackRequest {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* TrackActor;
    
    FMercunaTrackRequest();
};

