#pragma once
#include "CoreMinimal.h"
#include "UWEAbilitySaveData.h"
#include "UWEActiveGameplayEffectSaveData.h"
#include "UWEAbilitySystemComponentSaveData.generated.h"

USTRUCT(BlueprintType)
struct FUWEAbilitySystemComponentSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TArray<FUWEActiveGameplayEffectSaveData> ActiveGameplayEffects;
    
    UPROPERTY(SaveGame)
    TArray<FUWEAbilitySaveData> Abilities;
    
    UWEABILITYSYSTEM_API FUWEAbilitySystemComponentSaveData();
};

