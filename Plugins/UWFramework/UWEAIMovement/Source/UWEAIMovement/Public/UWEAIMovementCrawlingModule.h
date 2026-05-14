#pragma once
#include "CoreMinimal.h"
#include "UWEAIMovementCoreModule.h"
#include "UWEAIMovementCrawlingModule.generated.h"

class UMercunaSurfaceNavigationComponent;
class UUWEAIMovementCrawlingModuleSettings;

UCLASS(EditInlineNew)
class UWEAIMOVEMENT_API UUWEAIMovementCrawlingModule : public UUWEAIMovementCoreModule {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    UUWEAIMovementCrawlingModuleSettings* SelfSettings;
    
    UPROPERTY(Instanced)
    UMercunaSurfaceNavigationComponent* MercunaSurfaceNavigationComponent;
    
public:
    UUWEAIMovementCrawlingModule();

};

