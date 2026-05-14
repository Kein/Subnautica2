#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "MercunaAgentType.h"
#include "UWEMercunaSubsystem.generated.h"

class AMercunaNavGraph2D;
class AMercunaNavVolume;

UCLASS(BlueprintType)
class UWEMERCUNA_API UUWEMercunaSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UUWEMercunaSubsystem();

    UFUNCTION(BlueprintCallable)
    void RebuildQueriedChangesInAllNavGraphs();
    
    UFUNCTION(BlueprintCallable)
    FVector GetClosestPointToVolume(AMercunaNavVolume* Volume, const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    AMercunaNavGraph2D* FindClosestNavGraph2D(const FVector& position, const FMercunaAgentType& AgentType, float SearchRadius);
    
};

