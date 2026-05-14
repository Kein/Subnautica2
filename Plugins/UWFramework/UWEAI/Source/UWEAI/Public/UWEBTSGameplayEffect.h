#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "Templates/SubclassOf.h"
#include "UWEAITargetActorSelector.h"
#include "UWEBTSGameplayEffect.generated.h"

class UGameplayEffect;

UCLASS()
class UWEAI_API UUWEBTSGameplayEffect : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGameplayEffect> GameplayEffectClass;
    
    UPROPERTY(EditAnywhere)
    FUWEAITargetActorSelector TargetSelector;
    
    UPROPERTY(EditAnywhere)
    bool bSetByCaller_Override;
    
    UPROPERTY(EditAnywhere)
    float Magnitude;
    
    UPROPERTY(EditAnywhere)
    bool bDoNotRemoveEffect;
    
    UUWEBTSGameplayEffect();

};

