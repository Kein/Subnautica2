#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEActiveGameplayEffectSaveData.generated.h"

USTRUCT(BlueprintType)
struct FUWEActiveGameplayEffectSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FString GameplayEffectClassPathName;
    
    UPROPERTY(SaveGame)
    float TimeRemaining;
    
    UPROPERTY(SaveGame)
    int32 Level;
    
    UPROPERTY(SaveGame)
    FGameplayTagContainer DynamicGrantedTags;
    
    UWEABILITYSYSTEM_API FUWEActiveGameplayEffectSaveData();
};

