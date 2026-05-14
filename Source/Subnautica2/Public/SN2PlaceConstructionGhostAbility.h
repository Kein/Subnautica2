#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AbilityInfo.h"
#include "SN2BuilderActionAbility.h"
#include "SN2BuilderConstructionInfoProvider.h"
#include "SN2BuilderGhostParams.h"
#include "SN2ConstructableParams.h"
#include "SN2GhostPlacement.h"
#include "SN2PlaceConstructionGhostAbility.generated.h"

class ASN2BuilderGhost;
class USN2AbilityTask_UpdatePlacementGhost;
class USN2BuilderConstructActionData;

UCLASS()
class SUBNAUTICA2_API USN2PlaceConstructionGhostAbility : public USN2BuilderActionAbility, public IAbilityInfo, public ISN2BuilderConstructionInfoProvider {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    ASN2BuilderGhost* PlacementGhost;
    
    UPROPERTY(BlueprintReadWrite)
    USN2AbilityTask_UpdatePlacementGhost* UpdateTask;
    
    UPROPERTY()
    USN2BuilderConstructActionData* ActionData;
    
public:
    USN2PlaceConstructionGhostAbility();

private:
    UFUNCTION(BlueprintCallable)
    bool TrySpawnConstructionGhost(FSN2GhostPlacement GhostPlacement, FGuid TargetGUID);
    
    UFUNCTION(BlueprintCallable)
    void SpawnPlacementGhost(USN2BuilderConstructActionData* ConstructActionData);
    
    UFUNCTION(Reliable, Server)
    void ServerSpawnConstructionGhost(FSN2BuilderGhostParams GhostParams, FSN2ConstructableParams ConstructableParams, FSN2GhostPlacement Placement, FGuid GhostGUID);
    

    // Fix for true pure virtual functions not being implemented
};

