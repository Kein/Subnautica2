#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEPlayerSaveDataStub.generated.h"

USTRUCT(BlueprintType)
struct FUWEPlayerSaveDataStub {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FTransform Transform;
    
    UWEGAMEPLAY_API FUWEPlayerSaveDataStub();
};

