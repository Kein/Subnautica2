#pragma once
#include "CoreMinimal.h"
#include "UWECausticsSettings.generated.h"

USTRUCT(BlueprintType)
struct UWESKY_API FUWECausticsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SurfaceFadeDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CausticsBlend;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DepthFadeMin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DepthFadeMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DepthFadePower;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CausticsStrengthDirectLighting;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CullAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CausticsStrengthVolumetrics;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BloomExtinctionScale;
    
    FUWECausticsSettings();
};

