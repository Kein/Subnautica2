#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "MerEntitySubsystem.generated.h"

UCLASS()
class UMerEntitySubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UMerEntitySubsystem();

    virtual TStatId GetStatId() const override { RETURN_QUICK_DECLARE_CYCLE_STAT(UMerEntitySubsystem, STATGROUP_Tickables); }
};

