#pragma once
#include "CoreMinimal.h"
#include "EUWEConsolePermission.h"
#include "UWEConsoleCommand.generated.h"

USTRUCT(BlueprintType)
struct FUWEConsoleCommand {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditDefaultsOnly)
    FString Command;
    
    UPROPERTY(Config, EditDefaultsOnly)
    EUWEConsolePermission Permission;
    
    UWECONSOLE_API FUWEConsoleCommand();
};

