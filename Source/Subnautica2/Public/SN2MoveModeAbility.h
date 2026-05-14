#pragma once
#include "CoreMinimal.h"
#include "UWEGameplayAbility.h"
#include "AbilityInfo.h"
#include "SN2MoveModeAbility.generated.h"

UCLASS()
class SUBNAUTICA2_API USN2MoveModeAbility : public UUWEGameplayAbility, public IAbilityInfo {
    GENERATED_BODY()
public:
    USN2MoveModeAbility();


    // Fix for true pure virtual functions not being implemented
};

