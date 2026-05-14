#pragma once
#include "CoreMinimal.h"
#include "ComputerTextInterfaceAudio.generated.h"

class UFMODEvent;

USTRUCT(BlueprintType)
struct FComputerTextInterfaceAudio {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UFMODEvent> AudioPlayerInput;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString AudioPlayerEventKey;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AudioPlayerInputStartDelay;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AudioPlayerInputMaxDuration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UFMODEvent> AudioResponse;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString ResponseEventKey;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AudioResponseStartDelay;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AudioResponseMaxDuration;
    
    UWECOMPUTERTEXTINTERFACE_API FComputerTextInterfaceAudio();
};

