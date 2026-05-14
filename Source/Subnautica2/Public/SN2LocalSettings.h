#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "SN2AIMovementGymLaunchOptions.h"
#include "SN2StartupConsoleCommand.h"
#include "SN2LocalSettings.generated.h"

UCLASS(BlueprintType, Config=GameUserSettings)
class SUBNAUTICA2_API USN2LocalSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TArray<FSN2StartupConsoleCommand> StartupConsoleCommands;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FSN2AIMovementGymLaunchOptions AIMovementGymLaunchOptions;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FString PlayerStartLocation;
    
    USN2LocalSettings();

    UFUNCTION(BlueprintCallable)
    static void SetAIMovementGymLaunchOptions(FSN2AIMovementGymLaunchOptions InAIMovementGymLaunchOptions);
    
    UFUNCTION(BlueprintCallable)
    static FSN2AIMovementGymLaunchOptions GetAIMovementGymLaunchOptions();
    
};

