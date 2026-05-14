#pragma once
#include "CoreMinimal.h"
#include "UWEActorDataChange_Bool.generated.h"

USTRUCT(BlueprintType)
struct FUWEActorDataChange_Bool {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame)
    bool Value;
    
    UWEGLOBALACTORDATA_API FUWEActorDataChange_Bool();
};

