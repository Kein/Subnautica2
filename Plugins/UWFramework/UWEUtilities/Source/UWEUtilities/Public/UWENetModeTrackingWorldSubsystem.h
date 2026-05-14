#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "UWENetModeTrackingWorldSubsystem.generated.h"

UCLASS(Abstract)
class UWEUTILITIES_API UUWENetModeTrackingWorldSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UUWENetModeTrackingWorldSubsystem();

    virtual TStatId GetStatId() const override { RETURN_QUICK_DECLARE_CYCLE_STAT(UUWENetModeTrackingWorldSubsystem, STATGROUP_Tickables); }
};

