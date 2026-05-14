#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEDynamicRandomFloatRangeConfig.h"
#include "UWEAIMovementAuxiliaryModuleSettings.h"
#include "UWEAIMovementCircularMotionModuleSettings.generated.h"

UCLASS()
class UWEAIMOVEMENT_API UUWEAIMovementCircularMotionModuleSettings : public UUWEAIMovementAuxiliaryModuleSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator Angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWEDynamicRandomFloatRangeConfig RandomDeviationProportion;
    
    UUWEAIMovementCircularMotionModuleSettings();

};

