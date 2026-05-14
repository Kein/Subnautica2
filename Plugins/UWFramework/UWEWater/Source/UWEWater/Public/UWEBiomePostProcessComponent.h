#pragma once
#include "CoreMinimal.h"
#include "Components/PostProcessComponent.h"
#include "UWEBiomePostProcessComponent.generated.h"

UCLASS(CollapseCategories, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEWATER_API UUWEBiomePostProcessComponent : public UPostProcessComponent {
    GENERATED_BODY()
public:
    UUWEBiomePostProcessComponent(const FObjectInitializer& ObjectInitializer);

    virtual void OnRegister() {};
    virtual void OnUnregister() {};
    virtual void Serialize(class FArchive &) {};
};

