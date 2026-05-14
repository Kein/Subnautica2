#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CraftingRecipeRequirement.h"
#include "SN2BuilderActionData.h"
#include "SN2ConstructActorOverride.h"
#include "SN2ConstructActorOverrideKey.h"
#include "SN2PlacementParams.h"
#include "SN2BuilderConstructActionData.generated.h"

class AActor;
class ASN2GhostCustomizer;
class UStaticMesh;
class UUWECraftingRecipe;

UCLASS(EditInlineNew)
class SUBNAUTICA2_API USN2BuilderConstructActionData : public USN2BuilderActionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UStaticMesh> GhostMeshOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool RenderGhostOverlaySeparately;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UseGhostCameraOffsetOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GhostCameraOffsetOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<ASN2GhostCustomizer> CustomGhost;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSN2PlacementParams PlacementParams;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer TagsToAddDuringPlacement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UUWECraftingRecipe* Recipe;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bDeconstructOnly;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bSpawnAsDynamicItem;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FSN2ConstructActorOverrideKey, FSN2ConstructActorOverride> ActorOverrides;
    
    USN2BuilderConstructActionData();

    UFUNCTION(BlueprintCallable)
    void PreloadAssets();
    
    UFUNCTION(BlueprintPure)
    TArray<FCraftingRecipeRequirement> GetRequiredResources() const;
    
    UFUNCTION(BlueprintPure)
    TSoftClassPtr<AActor> GetDefaultActorClassToPlace() const;
    
};

