#pragma once
#include "CoreMinimal.h"
#include "ELightType.generated.h"

UENUM(BlueprintType)
enum class ELightType : uint8 {
    Unknown,
    SkyLight,
    DirectionalLight,
    PointLight,
    SpotLight,
    RectLight,
};

