#pragma once
#include "CoreMinimal.h"
#include "UWEAIMovementAuxiliaryModule.h"
#include "UWEAIMovementSpeedAlterationModule.generated.h"

class UUWEAIMovementSpeedAlterationModuleSettings;

UCLASS(DefaultToInstanced, EditInlineNew)
class UWEAIMOVEMENT_API UUWEAIMovementSpeedAlterationModule : public UUWEAIMovementAuxiliaryModule {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    UUWEAIMovementSpeedAlterationModuleSettings* Settings;
    
public:
    UUWEAIMovementSpeedAlterationModule();

};

