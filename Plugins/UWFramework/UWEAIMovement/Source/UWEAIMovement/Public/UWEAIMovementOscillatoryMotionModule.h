#pragma once
#include "CoreMinimal.h"
#include "UWEAIMovementAuxiliaryModule.h"
#include "UWEAIMovementOscillatoryMotionModule.generated.h"

class UUWEAIMovementOscillatoryMotionModuleSettings;

UCLASS(DefaultToInstanced, EditInlineNew)
class UWEAIMOVEMENT_API UUWEAIMovementOscillatoryMotionModule : public UUWEAIMovementAuxiliaryModule {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    UUWEAIMovementOscillatoryMotionModuleSettings* Settings;
    
public:
    UUWEAIMovementOscillatoryMotionModule();

};

