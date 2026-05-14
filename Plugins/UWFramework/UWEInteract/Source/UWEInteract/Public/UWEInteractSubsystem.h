#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "UWETargetActor.h"
#include "HoverTargetChangedDelegate.h"
#include "UWEInteractSubsystem.generated.h"

class AActor;

UCLASS(BlueprintType)
class UWEINTERACT_API UUWEInteractSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FHoverTargetChanged OnHoverTargetChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FUWETargetActor HoverTarget;
    
public:
    UUWEInteractSubsystem();

    UFUNCTION(BlueprintPure)
    AActor* GetSelectedTargetActor() const;
    
    UFUNCTION(BlueprintPure)
    FUWETargetActor GetHoverTarget() const;
    
};

