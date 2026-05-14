#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "UWEGameplayMessageSubsystem.generated.h"

UCLASS(BlueprintType)
class UWEGAMEPLAYMESSAGERUNTIME_API UUWEGameplayMessageSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UUWEGameplayMessageSubsystem();

    UFUNCTION(BlueprintCallable)
    void K2_SendToServer(FGameplayTag Channel, const int32& Message);
    
};

