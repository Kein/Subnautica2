#pragma once
#include "CoreMinimal.h"
#include "UWECausticsSettings.h"
#include "SkyOverride.generated.h"

USTRUCT(BlueprintType)
struct UWESKY_API FSkyOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FUWECausticsSettings CausticsSettings;
    
    FSkyOverride();
};

