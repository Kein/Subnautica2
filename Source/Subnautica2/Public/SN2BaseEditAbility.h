#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UWESculpturalBaseCellCost.h"
#include "EBuilderPlacementSurface.h"
#include "EBuilderPlacementZone.h"
#include "SN2BuilderActionAbility.h"
#include "SN2BuilderBlockingShape.h"
#include "SN2BuilderConstructionInfo.h"
#include "SN2BuilderConstructionInfoProvider.h"
#include "SN2ConstructableParams.h"
#include "SN2BaseEditAbility.generated.h"

class AActor;
class ASN2BuilderGhost;
class IUWEBaseEditAction;
class UUWEBaseEditAction;
class USN2AbilityTask_UpdateBaseEdit;
class USN2ItemBrushActionData;

UCLASS()
class SUBNAUTICA2_API USN2BaseEditAbility : public USN2BuilderActionAbility, public ISN2BuilderConstructionInfoProvider {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    ASN2BuilderGhost* Ghost;
    
public:
    USN2BaseEditAbility();

protected:
    UFUNCTION(BlueprintCallable)
    void SpawnGhostFromEditActionOnServer(FText Name, FTransform SpawnTransform, TSoftClassPtr<AActor> ActorToSpawn, TScriptInterface<IUWEBaseEditAction> EditAction, EBuilderPlacementSurface AllowedSurfaces, EBuilderPlacementZone AllowedZones, TArray<FUWESculpturalBaseCellCost> Costs, const TArray<FSN2BuilderBlockingShape>& BlockingShapes, const TArray<AActor*>& ActorsToIgnore, FGuid TargetGUID, float BuildTime, bool ForDeconstruct, bool IsEmbeddedActor, bool UseSoftLock);
    
    UFUNCTION(BlueprintCallable)
    void SpawnGhostFromClassOnServer(FText Name, FTransform SpawnTransform, TSoftClassPtr<AActor> ActorToSpawn, EBuilderPlacementSurface AllowedSurfaces, EBuilderPlacementZone AllowedZones, const TArray<FSN2BuilderBlockingShape>& BlockingShapes, const TArray<AActor*>& ActorsToIgnore, TArray<FUWESculpturalBaseCellCost> Costs, FGuid TargetGUID, float BuildTime);
    
    UFUNCTION(Reliable, Server)
    void ServerSpawnConstructionGhost(FSN2ConstructableParams ConstructableParams, FTransform Transform, const TArray<FSN2BuilderBlockingShape>& BlockingShapes, const TArray<AActor*>& ActorsToIgnore, FGuid GhostGUID, int32 CreatingPlayerID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerDeconstructActor(AActor* ActorToDeconstruct, FGuid TargetGUID);
    
    UFUNCTION(BlueprintCallable)
    void ReworkedSpawnGhost(USN2ItemBrushActionData* ActionData, USN2AbilityTask_UpdateBaseEdit* SelectionTask);
    
    UFUNCTION(BlueprintImplementableEvent)
    FSN2BuilderConstructionInfo GetConstructionInfo();
    

    // Fix for true pure virtual functions not being implemented
};

