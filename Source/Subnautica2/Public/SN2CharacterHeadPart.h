#pragma once
#include "CoreMinimal.h"
#include "SN2CharacterPart.h"
#include "SN2CharacterHeadPart.generated.h"

USTRUCT(BlueprintType)
struct FSN2CharacterHeadPart : public FSN2CharacterPart {
    GENERATED_BODY()
public:
    SUBNAUTICA2_API FSN2CharacterHeadPart();
};

