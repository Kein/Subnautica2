#pragma once
#include "CoreMinimal.h"
#include "UWERemovedProp.generated.h"

USTRUCT(BlueprintType)
struct FUWERemovedProp {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString LevelName;
    
    UPROPERTY()
    FString ActorName;
    
    UWESCULPTURALBASE_API FUWERemovedProp();
};

