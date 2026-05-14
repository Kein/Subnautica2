#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "UWELeviathanSubsystem.generated.h"

class AActor;
class AUWELeviathanTrigger;

UCLASS(BlueprintType, DefaultConfig, Config=UWELeviathan)
class UWELEVIATHAN_API UUWELeviathanSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<AActor> LeviathanClass;
    
    UPROPERTY(Config, EditAnywhere)
    float LeviathanMoveDistance;
    
    UUWELeviathanSubsystem();

    UFUNCTION(BlueprintCallable)
    AActor* OnTriggerAreaTouched(AUWELeviathanTrigger* Trigger, const TSoftClassPtr<AActor>& InLeviathanClass);

    virtual TStatId GetStatId() const override { RETURN_QUICK_DECLARE_CYCLE_STAT(UUWELeviathanSubsystem, STATGROUP_Tickables); }
};

