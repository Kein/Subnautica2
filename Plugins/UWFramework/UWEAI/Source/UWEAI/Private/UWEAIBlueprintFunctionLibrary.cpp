#include "UWEAIBlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"

UUWEAIBlueprintFunctionLibrary::UUWEAIBlueprintFunctionLibrary() {
}

AUWEAIPawn* UUWEAIBlueprintFunctionLibrary::SpawnCreature(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, const FTransform& Transform, UBehaviorTree* BehaviorTreeOverride) {
    return NULL;
}

void UUWEAIBlueprintFunctionLibrary::SetForceMultiplierByTerminalVelocity(const UUWEAIArchetypeDataAsset* ArchetypeDataAsset, UUWEAIMovementCoreModuleSettings* CoreModuleSettings, float TerminalVelocity) {
}

void UUWEAIBlueprintFunctionLibrary::OnAIMovementDataEdited(const UUWEAIArchetypeDataAsset* Archetype, UUWEPrimaryDataAssetBase* DataAssetBase) {
}

TSubclassOf<AActor> UUWEAIBlueprintFunctionLibrary::GetCreatureClass(FGameplayTag ArchetypeId) {
    return NULL;
}

UUWEAIArchetypeDataAsset* UUWEAIBlueprintFunctionLibrary::GetArchetype(FGameplayTag ArchetypeId) {
    return NULL;
}

void UUWEAIBlueprintFunctionLibrary::GetAllCreatureClass(TArray<TSubclassOf<AActor>>& OutAssets) {
}

FString UUWEAIBlueprintFunctionLibrary::GetAIMovementDescription(const UUWEAIArchetypeDataAsset* ArchetypeDataAsset, UUWEPrimaryDataAssetBase* DataAssetBase, bool DisplayDetails) {
    return TEXT("");
}

TArray<UUWEAIArchetypeDataAsset*> UUWEAIBlueprintFunctionLibrary::GetAIArchetypesWithDataAsset(UUWEPrimaryDataAssetBase* DataAsset) {
    return TArray<UUWEAIArchetypeDataAsset*>();
}


