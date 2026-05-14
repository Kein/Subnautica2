#pragma once
#include "CoreMinimal.h"
#include "MercunaMovementAdapter.h"
#include "UWEMercunaAIMovementComponentAdapter.generated.h"

class UMercunaSurfaceNavigationComponent;
class UUWEAIMovementComponent;

UCLASS(CollapseCategories, EditInlineNew)
class UWEAIMOVEMENT_API UUWEMercunaAIMovementComponentAdapter : public UMercunaMovementAdapter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UUWEAIMovementComponent* MovementComponent;
    
    UPROPERTY(Instanced)
    UMercunaSurfaceNavigationComponent* MercunaSurfaceNavigationComponent;
    
public:
    UUWEMercunaAIMovementComponentAdapter();

};

