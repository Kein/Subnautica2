#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "UWEWaterSubsystem.generated.h"

UCLASS(Transient)
class UWEWATER_API UUWEWaterSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UUWEWaterSubsystem();

    virtual TStatId GetStatId() const override { RETURN_QUICK_DECLARE_CYCLE_STAT(UUWEWaterSubsystem, STATGROUP_Tickables); }
};

