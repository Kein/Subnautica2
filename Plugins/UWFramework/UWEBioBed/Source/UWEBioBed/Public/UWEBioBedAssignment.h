#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEBioBedAssignment.generated.h"

USTRUCT(BlueprintType)
struct FUWEBioBedAssignment {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame, VisibleAnywhere)
    int32 PlayerId;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    FGuid BioBedId;
    
    UWEBIOBED_API FUWEBioBedAssignment();
};

