#pragma once
#include "CoreMinimal.h"
#include "IntVectorSetKey.generated.h"

USTRUCT()
struct FIntVectorSetKey {
    GENERATED_BODY()
public:
    SUBNAUTICA2_API FIntVectorSetKey();
};
FORCEINLINE uint32 GetTypeHash(const FIntVectorSetKey) { return 0; }

