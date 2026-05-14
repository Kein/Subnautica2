#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "EImGuiDPIScaleMethod.h"
#include "ImGuiDPIScaleInfo.generated.h"

USTRUCT(BlueprintType)
struct FImGuiDPIScaleInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EImGuiDPIScaleMethod ScalingMethod;
    
    UPROPERTY(EditAnywhere)
    float Scale;
    
    UPROPERTY(Config, EditAnywhere)
    FRuntimeFloatCurve DPICurve;
    
    UPROPERTY(Config, EditAnywhere)
    bool bScaleWithCurve;
    
    UPROPERTY(Config, EditAnywhere)
    bool bScaleWithViewport;
    
public:
    IMGUI_API FImGuiDPIScaleInfo();
};

