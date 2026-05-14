#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UWEConsoleCommand.h"
#include "UWEConsoleModuleSettings.generated.h"

UCLASS(DefaultConfig, Config=UWEConsole)
class UWECONSOLE_API UUWEConsoleModuleSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditDefaultsOnly)
    bool bLimitToAllowedCommandsInShipping;
    
    UPROPERTY(Config, EditDefaultsOnly)
    bool bLimitToAllowedCommandsInEverythingElse;
    
    UPROPERTY(Config, EditDefaultsOnly)
    TArray<FUWEConsoleCommand> Commands;
    
    UPROPERTY(Config, EditDefaultsOnly)
    TArray<FString> UnregisteredCommands;
    
    UUWEConsoleModuleSettings();

};

