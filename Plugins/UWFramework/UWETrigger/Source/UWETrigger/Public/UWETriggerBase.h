#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EUWEPlayerTriggerPolicy.h"
#include "FUWETriggerOverlapType.h"
#include "UWETriggerBase.generated.h"

UCLASS()
class UWETRIGGER_API AUWETriggerBase : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTrigger, AActor*, TriggeringActor, bool, TriggerWasSuccessful);
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EUWEPlayerTriggerPolicy TriggerPolicy;
    
    UPROPERTY(BlueprintAssignable)
    FOnTrigger OnTrigger;
    
    AUWETriggerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool TryExecuteActions(AActor* ForActor, FUWETriggerOverlapType OverlapType) const;
    
    UFUNCTION(BlueprintCallable)
    void Trigger(FUWETriggerOverlapType OverlapType, AActor* ForActor);
    
    UFUNCTION(BlueprintPure)
    bool CanTrigger(AActor* ForActor) const;
    
};

