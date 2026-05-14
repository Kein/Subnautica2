#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "UWEItemMovementSubsystem.generated.h"

class UUWEItemMovementComponent;

UCLASS()
class UWEMOVEMENT_API UUWEItemMovementSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UUWEItemMovementComponent>> MovementComponents;
    
public:
    UUWEItemMovementSubsystem();

    virtual TStatId GetStatId() const override { RETURN_QUICK_DECLARE_CYCLE_STAT(UUWEItemMovementSubsystem, STATGROUP_Tickables); }
};

