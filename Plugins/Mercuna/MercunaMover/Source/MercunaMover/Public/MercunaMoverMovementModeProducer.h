#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MercunaMoverMovementModeProducer.generated.h"

class UMercunaNavigationComponent;
class UMoverComponent;

UCLASS(Abstract, CollapseCategories, EditInlineNew)
class MERCUNAMOVER_API UMercunaMoverMovementModeProducer : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UMoverComponent* MoverComponent;
    
    UPROPERTY(Instanced)
    UMercunaNavigationComponent* NavigationComponent;
    
public:
    UMercunaMoverMovementModeProducer();

};

