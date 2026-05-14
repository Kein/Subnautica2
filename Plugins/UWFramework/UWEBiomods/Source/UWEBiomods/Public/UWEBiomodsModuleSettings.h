#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "UWEBiomodsModuleSettings.generated.h"

UCLASS(DefaultConfig, Config=UWEBiomods)
class UWEBIOMODS_API UUWEBiomodsModuleSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FGameplayTag PerActorSampleCooldownGameplayCue;
    
    UPROPERTY(Config, EditAnywhere)
    double PerActorSampleCooldownLength;
    
    UUWEBiomodsModuleSettings();

};

