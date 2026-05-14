#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEAIMovementBaseEnvironmentSettings.h"
#include "UWEAIMovementCoreModuleSettingsPack.generated.h"

class UUWEAIMovementBaseSettings;
class UUWEAIMovementComponentGlobalSettings;
class UUWEAIMovementCoreModuleSettings;
class UUWEAIMovementEnvironmentSettings;

USTRUCT(BlueprintType)
struct FUWEAIMovementCoreModuleSettingsPack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    UUWEAIMovementComponentGlobalSettings* Global;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    UUWEAIMovementBaseSettings* base;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    UUWEAIMovementCoreModuleSettings* Module;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FGameplayTag EnvironmentType;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleInstanceOnly)
    UUWEAIMovementEnvironmentSettings* EnvironmentGlobal;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FUWEAIMovementBaseEnvironmentSettings EnvironmentBase;
    
    UWEAIMOVEMENT_API FUWEAIMovementCoreModuleSettingsPack();
};

