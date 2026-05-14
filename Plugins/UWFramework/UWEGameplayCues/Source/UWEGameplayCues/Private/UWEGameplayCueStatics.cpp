#include "UWEGameplayCueStatics.h"
#include "Templates/SubclassOf.h"

UUWEGameplayCueStatics::UUWEGameplayCueStatics() {
}

UActorComponent* UUWEGameplayCueStatics::GetCueParamSourceComponent(const FGameplayCueParameters& CueParams, const FUWEEffectParam& EffectParam, const AActor* Target) {
    return NULL;
}

AActor* UUWEGameplayCueStatics::GetCueParamSourceActorByClass(const FGameplayCueParameters& CueParams, const FUWEEffectParam& EffectParam, const AActor* Target, TSubclassOf<AActor> ActorClass) {
    return NULL;
}

AActor* UUWEGameplayCueStatics::GetCueParamSourceActor(const FGameplayCueParameters& CueParams, const FUWEEffectParam& EffectParam, const AActor* Target) {
    return NULL;
}

bool UUWEGameplayCueStatics::FetchGameplayCueParamMap(const FGameplayCueParameters& CueParams, const TArray<FUWEEffectParam>& Params, const AActor* Target, TMap<FName, float>& OutParamMap, const FString& Context, float DeltaTime) {
    return false;
}

float UUWEGameplayCueStatics::FetchGameplayCueParameterFloat(const FGameplayCueParameters& CueParams, const FUWEEffectParam& EffectParam, const AActor* Target, const FString& Context, float DeltaTime) {
    return 0.0f;
}


