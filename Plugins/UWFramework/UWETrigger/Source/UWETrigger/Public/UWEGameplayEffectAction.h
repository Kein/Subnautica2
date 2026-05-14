#pragma once
#include "CoreMinimal.h"
#include "UWEPlayerTriggerAction.h"
#include "UWEGameplayEffectAction.generated.h"

class UGameplayEffect;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWETRIGGER_API UUWEGameplayEffectAction : public UUWEPlayerTriggerAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UGameplayEffect> GameplayEffect;
    
    UPROPERTY(EditAnywhere)
    bool Remove;
    
public:
    UUWEGameplayEffectAction(const FObjectInitializer& ObjectInitializer);

};

