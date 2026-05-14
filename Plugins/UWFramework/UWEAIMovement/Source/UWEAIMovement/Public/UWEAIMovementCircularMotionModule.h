#pragma once
#include "CoreMinimal.h"
#include "UWEAIMovementAuxiliaryModule.h"
#include "UWEAIMovementCircularMotionModule.generated.h"

class UUWEAIMovementCircularMotionModuleSettings;

UCLASS(DefaultToInstanced, EditInlineNew)
class UWEAIMOVEMENT_API UUWEAIMovementCircularMotionModule : public UUWEAIMovementAuxiliaryModule {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    UUWEAIMovementCircularMotionModuleSettings* Settings;
    
public:
    UUWEAIMovementCircularMotionModule();

};

