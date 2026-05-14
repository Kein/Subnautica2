#pragma once
#include "CoreMinimal.h"
#include "UWEProxyMaterialKey.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FUWEProxyMaterialKey {
    GENERATED_BODY()
public:
    UPROPERTY()
    UMaterialInterface* MaterialInterface;
    
    UWESCULPTURALBASE_API FUWEProxyMaterialKey();
};
FORCEINLINE uint32 GetTypeHash(const FUWEProxyMaterialKey) { return 0; }

