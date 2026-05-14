#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "UWEAIBlueprintFunctionLibrary.generated.h"

class AActor;
class AUWEAIPawn;
class UBehaviorTree;
class UObject;
class UUWEAIArchetypeDataAsset;
class UUWEAIMovementCoreModuleSettings;
class UUWEPrimaryDataAssetBase;

UCLASS(BlueprintType)
class UWEAI_API UUWEAIBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWEAIBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AUWEAIPawn* SpawnCreature(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, const FTransform& Transform, UBehaviorTree* BehaviorTreeOverride);
    
    UFUNCTION(BlueprintCallable)
    static void SetForceMultiplierByTerminalVelocity(const UUWEAIArchetypeDataAsset* ArchetypeDataAsset, UUWEAIMovementCoreModuleSettings* CoreModuleSettings, float TerminalVelocity);
    
    UFUNCTION(BlueprintCallable)
    static void OnAIMovementDataEdited(const UUWEAIArchetypeDataAsset* Archetype, UUWEPrimaryDataAssetBase* DataAssetBase);
    
    UFUNCTION(BlueprintCallable)
    static TSubclassOf<AActor> GetCreatureClass(FGameplayTag ArchetypeId);
    
    UFUNCTION(BlueprintCallable)
    static UUWEAIArchetypeDataAsset* GetArchetype(FGameplayTag ArchetypeId);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllCreatureClass(TArray<TSubclassOf<AActor>>& OutAssets);
    
    UFUNCTION(BlueprintPure)
    static FString GetAIMovementDescription(const UUWEAIArchetypeDataAsset* ArchetypeDataAsset, UUWEPrimaryDataAssetBase* DataAssetBase, bool DisplayDetails);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UUWEAIArchetypeDataAsset*> GetAIArchetypesWithDataAsset(UUWEPrimaryDataAssetBase* DataAsset);
    
};

