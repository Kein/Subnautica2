#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "UWEDynamicResourcesSettings.generated.h"

class UUWEGameplayAbility;

UCLASS(DefaultConfig, Config=Game)
class UWEDYNAMICRESOURCES_API UUWEDynamicResourcesSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TArray<TSoftClassPtr<UUWEGameplayAbility>> DefaultAbilities;
    
    UUWEDynamicResourcesSettings();

};

