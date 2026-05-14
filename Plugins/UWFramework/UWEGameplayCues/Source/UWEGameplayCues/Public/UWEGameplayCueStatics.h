#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayEffectTypes.h"
#include "Templates/SubclassOf.h"
#include "UWEEffectParam.h"
#include "UWEGameplayCueStatics.generated.h"

class AActor;
class UActorComponent;

UCLASS(BlueprintType)
class UWEGAMEPLAYCUES_API UUWEGameplayCueStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWEGameplayCueStatics();

    UFUNCTION(BlueprintPure)
    static UActorComponent* GetCueParamSourceComponent(const FGameplayCueParameters& CueParams, const FUWEEffectParam& EffectParam, const AActor* Target);
    
    UFUNCTION(BlueprintPure)
    static AActor* GetCueParamSourceActorByClass(const FGameplayCueParameters& CueParams, const FUWEEffectParam& EffectParam, const AActor* Target, TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintPure)
    static AActor* GetCueParamSourceActor(const FGameplayCueParameters& CueParams, const FUWEEffectParam& EffectParam, const AActor* Target);
    
    UFUNCTION(BlueprintPure)
    static bool FetchGameplayCueParamMap(const FGameplayCueParameters& CueParams, const TArray<FUWEEffectParam>& Params, const AActor* Target, TMap<FName, float>& OutParamMap, const FString& Context, float DeltaTime);
    
    UFUNCTION(BlueprintPure)
    static float FetchGameplayCueParameterFloat(const FGameplayCueParameters& CueParams, const FUWEEffectParam& EffectParam, const AActor* Target, const FString& Context, float DeltaTime);
    
};

