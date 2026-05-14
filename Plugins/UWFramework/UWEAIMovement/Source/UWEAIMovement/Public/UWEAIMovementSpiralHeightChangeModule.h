#pragma once
#include "CoreMinimal.h"
#include "UWEAIMovementAuxiliaryModule.h"
#include "UWEAIMovementSpiralHeightChangeModule.generated.h"

class UUWEAIMovementSpiralHeightChangeModuleSettings;

UCLASS(DefaultToInstanced, EditInlineNew)
class UWEAIMOVEMENT_API UUWEAIMovementSpiralHeightChangeModule : public UUWEAIMovementAuxiliaryModule {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    UUWEAIMovementSpiralHeightChangeModuleSettings* Settings;
    
public:
    UUWEAIMovementSpiralHeightChangeModule();

};

