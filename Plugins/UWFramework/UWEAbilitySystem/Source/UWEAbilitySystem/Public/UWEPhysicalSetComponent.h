#pragma once
#include "CoreMinimal.h"
#include "UWEAttributeSetComponent.h"
#include "UWEPhysicalSetComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEABILITYSYSTEM_API UUWEPhysicalSetComponent : public UUWEAttributeSetComponent {
    GENERATED_BODY()
public:
    UUWEPhysicalSetComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    float GetBulk() const;
    
};

