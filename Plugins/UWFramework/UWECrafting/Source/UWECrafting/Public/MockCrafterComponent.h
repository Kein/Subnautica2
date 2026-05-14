#pragma once
#include "CoreMinimal.h"
#include "UWECrafterComponent.h"
#include "MockCrafterComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWECRAFTING_API UMockCrafterComponent : public UUWECrafterComponent {
    GENERATED_BODY()
public:
    UMockCrafterComponent(const FObjectInitializer& ObjectInitializer);

};

