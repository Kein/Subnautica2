#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "SN2UISettings.generated.h"

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class SUBNAUTICA2_API USN2UISettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    float LargeTextScale;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    float MinApplicationScale;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    float MaxApplicationScale;
    
    USN2UISettings();

};

