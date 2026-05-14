#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UWESupportOverride.generated.h"

class AUWEBaseSupportActor;

USTRUCT(BlueprintType)
struct FUWESupportOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AUWEBaseSupportActor> SupportActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector Offset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FQuat RelativeRotation;
    
    UWESCULPTURALBASE_API FUWESupportOverride();
};

