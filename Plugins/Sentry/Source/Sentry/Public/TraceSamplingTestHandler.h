#pragma once
#include "CoreMinimal.h"
#include "SentryTraceSampler.h"
#include "TraceSamplingTestHandler.generated.h"

UCLASS()
class UTraceSamplingTestHandler : public USentryTraceSampler {
    GENERATED_BODY()
public:
    UTraceSamplingTestHandler();

};

