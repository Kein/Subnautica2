#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SN2RefineryRouterComponent.generated.h"

class ASN2Refinery;
class UUWECraftingRecipe;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2RefineryRouterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USN2RefineryRouterComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Reliable, Server)
    void ServerSetActiveRecipe(ASN2Refinery* Refinery, UUWECraftingRecipe* Recipe);
    
    UFUNCTION(Reliable, Server)
    void ServerFillFromCommunalInventories(ASN2Refinery* Refinery);
    
};

