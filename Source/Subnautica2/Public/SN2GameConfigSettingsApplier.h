#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWEGameConfigSettings.h"
#include "SN2GameConfigSettingsApplier.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2GameConfigSettingsApplier : public UActorComponent {
    GENERATED_BODY()
public:
    USN2GameConfigSettingsApplier(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnSettingsChanged(const FUWEGameConfigSettings& ChangedSettings);
    
};

