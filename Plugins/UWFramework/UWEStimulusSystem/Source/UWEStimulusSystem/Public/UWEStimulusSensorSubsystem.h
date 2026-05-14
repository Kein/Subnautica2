#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "UWEStimulusSensorSubsystem.generated.h"

UCLASS()
class UWESTIMULUSSYSTEM_API UUWEStimulusSensorSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UUWEStimulusSensorSubsystem();

    virtual TStatId GetStatId() const override { RETURN_QUICK_DECLARE_CYCLE_STAT(UUWEStimulusSensorSubsystem, STATGROUP_Tickables); }
};

