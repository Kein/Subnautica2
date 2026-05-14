#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "UWESentryLocationUpdater.generated.h"

UCLASS()
class UWECRASHREPORTER_API UUWESentryLocationUpdater : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UUWESentryLocationUpdater();

};

