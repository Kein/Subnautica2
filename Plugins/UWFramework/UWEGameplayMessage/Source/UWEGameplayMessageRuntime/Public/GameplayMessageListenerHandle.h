#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayMessageListenerHandle.generated.h"

class UUWEGameplayMessageSubsystem;

USTRUCT(BlueprintType)
struct UWEGAMEPLAYMESSAGERUNTIME_API FGameplayMessageListenerHandle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TWeakObjectPtr<UUWEGameplayMessageSubsystem> Subsystem;
    
    UPROPERTY(Transient)
    FGameplayTag Channel;
    
    UPROPERTY(Transient)
    int32 ID;
    
public:
    FGameplayMessageListenerHandle();
};

