#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "UWETimeSlicedTaskSubsystem.generated.h"

UCLASS()
class UWETICKAGGREGATION_API UUWETimeSlicedTaskSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UUWETimeSlicedTaskSubsystem();

    virtual TStatId GetStatId() const override { RETURN_QUICK_DECLARE_CYCLE_STAT(UUWETimeSlicedTaskSubsystem, STATGROUP_Tickables); }
};

