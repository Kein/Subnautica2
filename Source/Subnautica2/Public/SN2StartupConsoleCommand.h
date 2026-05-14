#pragma once
#include "CoreMinimal.h"
#include "ESN2StartupConsoleCommandExecuteTime.h"
#include "SN2StartupConsoleCommand.generated.h"

USTRUCT(BlueprintType)
struct FSN2StartupConsoleCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool Enabled;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Command;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESN2StartupConsoleCommandExecuteTime ExecuteTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Delay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ExecuteFromClient;
    
    SUBNAUTICA2_API FSN2StartupConsoleCommand();
};

