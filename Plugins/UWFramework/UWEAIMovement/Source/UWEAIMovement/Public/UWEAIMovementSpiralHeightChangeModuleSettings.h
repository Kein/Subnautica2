#pragma once
#include "CoreMinimal.h"
#include "UWEDynamicRandomFloatRangeConfig.h"
#include "UWEAIMovementAuxiliaryModuleSettings.h"
#include "UWEAIMovementSpiralHeightChangeModuleSettings.generated.h"

UCLASS()
class UWEAIMOVEMENT_API UUWEAIMovementSpiralHeightChangeModuleSettings : public UUWEAIMovementAuxiliaryModuleSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationAxisYLimitUpperHalfAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationAxisYLimitLowerHalfAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWEDynamicRandomFloatRangeConfig RandomDeviationProportion;
    
    UUWEAIMovementSpiralHeightChangeModuleSettings();

};

