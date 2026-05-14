#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "UWEAIMovementCoreModuleSettingsPack.h"
#include "UWEAIMovementBlueprintFunctionLibrary.generated.h"

class UUWEAIMovementBaseSettings;
class UUWEAIMovementComponentGlobalSettings;
class UUWEPrimaryDataAssetBase;

UCLASS(BlueprintType)
class UWEAIMOVEMENT_API UUWEAIMovementBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWEAIMovementBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetForceMultiplierByTerminalVelocity(const FUWEAIMovementCoreModuleSettingsPack& Settings, float TerminalVelocity);
    
    UFUNCTION(BlueprintPure)
    static FString GetAIMovementDescription(UUWEAIMovementComponentGlobalSettings* GlobalSettings, UUWEAIMovementBaseSettings* BaseSettings, UUWEPrimaryDataAssetBase* DataAsset, bool DisplayDetails);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTag ChooseDefaultEnvironment(UUWEAIMovementComponentGlobalSettings* GlobalSettings, UUWEAIMovementBaseSettings* BaseSettings);
    
};

