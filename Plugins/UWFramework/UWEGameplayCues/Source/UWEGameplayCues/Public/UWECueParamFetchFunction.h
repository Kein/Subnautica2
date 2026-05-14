#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayEffectTypes.h"
#include "UWEEffectParam.h"
#include "UWECueParamFetchFunction.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable)
class UWEGAMEPLAYCUES_API UUWECueParamFetchFunction : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool bInstantiate;
    
    UUWECueParamFetchFunction();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Initialize(const FGameplayCueParameters& CueParams, const FUWEEffectParam& EffectParam, const AActor* Target);
    
    UFUNCTION(BlueprintPure)
    bool GetIsTemplate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float FetchParam(const FGameplayCueParameters& CueParams, const FUWEEffectParam& EffectParam, const AActor* Target);
    
};

