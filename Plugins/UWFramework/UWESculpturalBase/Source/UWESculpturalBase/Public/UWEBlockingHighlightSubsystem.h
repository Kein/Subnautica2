#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "UWEBlockerState.h"
#include "UWEBlockingHighlightSubsystem.generated.h"

class AActor;

UCLASS()
class UWESCULPTURALBASE_API UUWEBlockingHighlightSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TMap<TWeakObjectPtr<AActor>, FUWEBlockerState> BlockerStates;
    
public:
    UUWEBlockingHighlightSubsystem();

    virtual TStatId GetStatId() const override { RETURN_QUICK_DECLARE_CYCLE_STAT(UUWEBlockingHighlightSubsystem, STATGROUP_Tickables); }
};

