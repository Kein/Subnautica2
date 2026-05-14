#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "OnStoryEventTriggeredDelegate.h"
#include "UWEStoryEventSubsystem.generated.h"

UCLASS(BlueprintType)
class UWESTORYEVENTS_API UUWEStoryEventSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UUWEStoryEventSubsystem();

    UFUNCTION(BlueprintCallable)
    void BindOnTagStoryEventTriggered(FGameplayTag EventTag, const FOnStoryEventTriggered& OnTriggeredEvent);
    
};

