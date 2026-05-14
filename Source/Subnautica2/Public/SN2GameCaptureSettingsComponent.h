#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "SN2GameCaptureSettingsComponent.generated.h"

class UUWEGameCaptureComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2GameCaptureSettingsComponent : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UUWEGameCaptureComponent* GameCaptureComponent;
    
public:
    USN2GameCaptureSettingsComponent(const FObjectInitializer& ObjectInitializer);

};

