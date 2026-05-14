#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UWEAIArchetypeProfile.generated.h"

USTRUCT(BlueprintType)
struct FUWEAIArchetypeProfile {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDataTableRowHandle ProfileRow;
    
    UWEAI_API FUWEAIArchetypeProfile();
};

