#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SN2ProcessorStationInteractionComponent.generated.h"

class ASN2ProcessorStation;
class USN2ProcessorStationRecipeSelection;
class UUWECraftingRecipe;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2ProcessorStationInteractionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USN2ProcessorStationInteractionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TryLoadForRecipe(ASN2ProcessorStation* ProcessorStation);
    
private:
    UFUNCTION(Reliable, Server)
    void ServerTryLoadForRecipe(ASN2ProcessorStation* ProcessorStation);
    
    UFUNCTION(Reliable, Server)
    void ServerSelectRecipe(USN2ProcessorStationRecipeSelection* RecipeSelection, UUWECraftingRecipe* Recipe);
    
public:
    UFUNCTION(BlueprintCallable)
    void SelectRecipe(USN2ProcessorStationRecipeSelection* RecipeSelection, UUWECraftingRecipe* Recipe);
    
};

