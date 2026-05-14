#pragma once
#include "CoreMinimal.h"
#include "UWERenderMeshHandle.generated.h"

USTRUCT(BlueprintType)
struct FUWERenderMeshHandle {
    GENERATED_BODY()
public:
    UWESCULPTURALBASE_API FUWERenderMeshHandle();
};
FORCEINLINE uint32 GetTypeHash(const FUWERenderMeshHandle) { return 0; }

