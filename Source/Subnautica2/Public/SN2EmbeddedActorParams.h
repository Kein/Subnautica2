#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEBaseModulePieceID.h"
#include "ESN2EmbededActorPlacementMode.h"
#include "SN2EmbeddedActorParams.generated.h"

class AActor;
class UUWECraftingRecipe;

USTRUCT(BlueprintType)
struct FSN2EmbeddedActorParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UUWECraftingRecipe* Recipe;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AActor> ActorToEmbed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UseSoftLock;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform Transform;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESN2EmbededActorPlacementMode PlacementMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSet<FUWEBaseModulePieceID> ModulesToAlignTo;
    
    SUBNAUTICA2_API FSN2EmbeddedActorParams();
};

