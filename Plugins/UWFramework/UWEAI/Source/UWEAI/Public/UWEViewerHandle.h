#pragma once
#include "CoreMinimal.h"
#include "IndexedHandle.h"
#include "UWEViewerHandle.generated.h"

USTRUCT(BlueprintType)
struct UWEAI_API FUWEViewerHandle : public FIndexedHandleBase {
    GENERATED_BODY()
public:
    FUWEViewerHandle();
};

