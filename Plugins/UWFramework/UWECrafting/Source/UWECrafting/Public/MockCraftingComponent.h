#pragma once
#include "CoreMinimal.h"
#include "UWECraftingComponent.h"
#include "MockCraftingComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWECRAFTING_API UMockCraftingComponent : public UUWECraftingComponent {
    GENERATED_BODY()
public:
    UMockCraftingComponent(const FObjectInitializer& ObjectInitializer);

};

