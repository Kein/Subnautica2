#pragma once
#include "CoreMinimal.h"
#include "UWEMaterialParameterKey.generated.h"

USTRUCT(BlueprintType)
struct FUWEMaterialParameterKey {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName ParameterName;
    
    UWESCULPTURALBASE_API FUWEMaterialParameterKey();
};
FORCEINLINE uint32 GetTypeHash(const FUWEMaterialParameterKey) { return 0; }

