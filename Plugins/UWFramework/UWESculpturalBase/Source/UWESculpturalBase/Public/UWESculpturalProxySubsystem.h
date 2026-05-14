#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "UWESculpturalProxySubsystem.generated.h"

UCLASS()
class UWESCULPTURALBASE_API UUWESculpturalProxySubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UUWESculpturalProxySubsystem();

    virtual TStatId GetStatId() const override { RETURN_QUICK_DECLARE_CYCLE_STAT(UUWESculpturalProxySubsystem, STATGROUP_Tickables); }
};

