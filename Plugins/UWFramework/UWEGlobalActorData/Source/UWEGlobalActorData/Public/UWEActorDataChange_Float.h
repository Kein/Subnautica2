#pragma once
#include "CoreMinimal.h"
#include "UWEActorDataChange_Float.generated.h"

USTRUCT(BlueprintType)
struct FUWEActorDataChange_Float {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame)
    float Value;
    
    UWEGLOBALACTORDATA_API FUWEActorDataChange_Float();
};

