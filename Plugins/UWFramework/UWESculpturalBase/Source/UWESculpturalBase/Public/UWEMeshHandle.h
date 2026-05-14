#pragma once
#include "CoreMinimal.h"
#include "UWEMeshHandle.generated.h"

USTRUCT(BlueprintType)
struct FUWEMeshHandle {
    GENERATED_BODY()
public:
    UWESCULPTURALBASE_API FUWEMeshHandle();
};
FORCEINLINE uint32 GetTypeHash(const FUWEMeshHandle) { return 0; }

