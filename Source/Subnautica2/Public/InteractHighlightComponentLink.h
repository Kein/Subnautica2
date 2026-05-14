#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "InteractHighlightComponentLink.generated.h"

USTRUCT(BlueprintType)
struct FInteractHighlightComponentLink {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FComponentReference HoveredComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FComponentReference> HighlightedComponents;
    
    SUBNAUTICA2_API FInteractHighlightComponentLink();
};

