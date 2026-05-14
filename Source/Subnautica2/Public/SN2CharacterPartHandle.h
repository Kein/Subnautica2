#pragma once
#include "CoreMinimal.h"
#include "SN2CharacterPartHandle.generated.h"

USTRUCT(BlueprintType)
struct FSN2CharacterPartHandle {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    int32 PartHandle;
    
public:
    SUBNAUTICA2_API FSN2CharacterPartHandle();
};

