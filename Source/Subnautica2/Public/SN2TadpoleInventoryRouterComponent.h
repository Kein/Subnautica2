#pragma once
#include "CoreMinimal.h"
#include "UWEInventoryRouterComponent.h"
#include "SN2TadpoleInventoryRouterComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2TadpoleInventoryRouterComponent : public UUWEInventoryRouterComponent {
    GENERATED_BODY()
public:
    USN2TadpoleInventoryRouterComponent(const FObjectInitializer& ObjectInitializer);

};

