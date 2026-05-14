#pragma once
#include "CoreMinimal.h"
#include "EMercunaWorkerThreadType.generated.h"

UENUM(BlueprintType)
enum class EMercunaWorkerThreadType : uint8 {
    UnrealThreadPool,
    UnrealTaskGraph,
    IndependentWorkerThreads,
};

