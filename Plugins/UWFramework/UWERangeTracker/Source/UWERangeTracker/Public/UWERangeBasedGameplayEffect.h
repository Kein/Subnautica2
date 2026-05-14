#pragma once
#include "CoreMinimal.h"
#include "UWESimpleShapeTriggerComponent.h"
#include "UWERangeBasedGameplayEffect.generated.h"

class UGameplayEffect;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWERANGETRACKER_API UUWERangeBasedGameplayEffect : public UUWESimpleShapeTriggerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<UGameplayEffect> GameplayEffect;
    
public:
    UUWERangeBasedGameplayEffect(const FObjectInitializer& ObjectInitializer);

};

