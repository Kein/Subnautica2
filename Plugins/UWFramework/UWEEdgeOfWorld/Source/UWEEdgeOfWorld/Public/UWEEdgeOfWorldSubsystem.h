#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UWEEdgeOfWorldSubsystem.generated.h"

class AUWEEdgeOfWorldSpline;

UCLASS(BlueprintType)
class UWEEDGEOFWORLD_API UUWEEdgeOfWorldSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UUWEEdgeOfWorldSubsystem();

    UFUNCTION(BlueprintPure)
    bool IsPointWithinEdgeOfWorld(FVector Point) const;
    
    UFUNCTION(BlueprintPure)
    bool IsPointOutOfBounds(FVector Point) const;
    
    UFUNCTION(BlueprintPure)
    bool IsEdgeOfWorldCollisionEnabled() const;
    
    UFUNCTION(BlueprintPure)
    AUWEEdgeOfWorldSpline* GetEdgeOfWorld() const;
    
};

