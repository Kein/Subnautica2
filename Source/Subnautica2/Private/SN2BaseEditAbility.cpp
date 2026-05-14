#include "SN2BaseEditAbility.h"

USN2BaseEditAbility::USN2BaseEditAbility() {
    this->Ghost = NULL;
}

void USN2BaseEditAbility::SpawnGhostFromEditActionOnServer(FText Name, FTransform SpawnTransform, TSoftClassPtr<AActor> ActorToSpawn, TScriptInterface<IUWEBaseEditAction> EditAction, EBuilderPlacementSurface AllowedSurfaces, EBuilderPlacementZone AllowedZones, TArray<FUWESculpturalBaseCellCost> Costs, const TArray<FSN2BuilderBlockingShape>& BlockingShapes, const TArray<AActor*>& ActorsToIgnore, FGuid TargetGUID, float BuildTime, bool ForDeconstruct, bool IsEmbeddedActor, bool UseSoftLock) {
}

void USN2BaseEditAbility::SpawnGhostFromClassOnServer(FText Name, FTransform SpawnTransform, TSoftClassPtr<AActor> ActorToSpawn, EBuilderPlacementSurface AllowedSurfaces, EBuilderPlacementZone AllowedZones, const TArray<FSN2BuilderBlockingShape>& BlockingShapes, const TArray<AActor*>& ActorsToIgnore, TArray<FUWESculpturalBaseCellCost> Costs, FGuid TargetGUID, float BuildTime) {
}

void USN2BaseEditAbility::ServerSpawnConstructionGhost_Implementation(FSN2ConstructableParams ConstructableParams, FTransform Transform, const TArray<FSN2BuilderBlockingShape>& BlockingShapes, const TArray<AActor*>& ActorsToIgnore, FGuid GhostGUID, int32 CreatingPlayerID) {
}

void USN2BaseEditAbility::ServerDeconstructActor_Implementation(AActor* ActorToDeconstruct, FGuid TargetGUID) {
}

void USN2BaseEditAbility::ReworkedSpawnGhost(USN2ItemBrushActionData* ActionData, USN2AbilityTask_UpdateBaseEdit* SelectionTask) {
}



