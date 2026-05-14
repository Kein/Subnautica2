#pragma once
#include "CoreMinimal.h"
#include "MercunaSurfaceNavigationComponent.h"
#include "UWEMercunaSurfaceNavigationComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEMERCUNA_API UUWEMercunaSurfaceNavigationComponent : public UMercunaSurfaceNavigationComponent {
    GENERATED_BODY()
public:
    UUWEMercunaSurfaceNavigationComponent(const FObjectInitializer& ObjectInitializer);

};

