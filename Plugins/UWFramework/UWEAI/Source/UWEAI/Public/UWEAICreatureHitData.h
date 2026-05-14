#pragma once
#include "CoreMinimal.h"
#include "UWEActorDataAsset.h"
#include "Templates/SubclassOf.h"
#include "UWEAICreatureHitData.generated.h"

class AActor;
class UUWEAICreatureHitData;
class UUWEGameplayEffect;

UCLASS(EditInlineNew)
class UWEAI_API UUWEAICreatureHitData : public UUWEActorDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 HitEffectCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UUWEGameplayEffect> EffectToApplyOnHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UUWEGameplayEffect> EffectToApplyOnHitCountExceeded;
    
    UUWEAICreatureHitData();

    UFUNCTION(BlueprintPure)
    static UUWEAICreatureHitData* GetCreatureHitDataForActor(const AActor* Actor);
    
};

