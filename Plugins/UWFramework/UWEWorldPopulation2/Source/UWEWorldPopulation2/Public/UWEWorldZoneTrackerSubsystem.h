#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "UWEWorldZoneTrackerSubsystem.generated.h"

class AUWEWorldZone;

UCLASS(BlueprintType)
class UWEWORLDPOPULATION2_API UUWEWorldZoneTrackerSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<AUWEWorldZone*> Zones;
    
public:
    UUWEWorldZoneTrackerSubsystem();

    UFUNCTION(BlueprintPure)
    FGameplayTag FindWorldZoneTag(const FVector& Location) const;
    
virtual TStatId GetStatId() const override { RETURN_QUICK_DECLARE_CYCLE_STAT(UUWEWorldZoneTrackerSubsystem, STATGROUP_Tickables); }
};

