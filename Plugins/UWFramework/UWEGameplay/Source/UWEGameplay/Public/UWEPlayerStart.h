#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "UWEPlayerStart.generated.h"

class APawn;
class AUWEGameModeBase;

UCLASS()
class UWEGAMEPLAY_API AUWEPlayerStart : public APlayerStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AUWEGameModeBase> DefaultForGameModeClass;
    
    AUWEPlayerStart(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveStartConditions(APawn* PlayerPawn);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStartConditionsRemoved(APawn* PlayerPawn);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStartConditionsApplied(APawn* PlayerPawn);
    
    UFUNCTION(BlueprintCallable)
    void ApplyStartConditions(APawn* PlayerPawn);
    
};

