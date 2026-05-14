#pragma once
#include "CoreMinimal.h"
#include "UWEAIMovementCoreModule.h"
#include "UWEAIMovementSwimmingModule.generated.h"

class UUWEAIMovementSwimmingModuleSettings;

UCLASS(EditInlineNew)
class UWEAIMOVEMENT_API UUWEAIMovementSwimmingModule : public UUWEAIMovementCoreModule {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    UUWEAIMovementSwimmingModuleSettings* SelfSettings;
    
public:
    UUWEAIMovementSwimmingModule();

};

