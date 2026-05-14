#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEBreakableBase.h"
#include "UWEBreakableData.generated.h"

class AActor;
class UActorComponent;
class UGameplayEffect;
class UUWEBreakableData;

UCLASS(EditInlineNew)
class UWEBREAKABLE_API UUWEBreakableData : public UUWEBreakableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag HitCueTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<UGameplayEffect> HitStimulusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumHitsToBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumHitsToBreakWithTool;
    
    UUWEBreakableData();

    UFUNCTION(BlueprintPure)
    static UUWEBreakableData* GetBreakableDataForComponent(UActorComponent* ActorComponent);
    
    UFUNCTION(BlueprintPure)
    static UUWEBreakableData* GetBreakableDataForActor(const AActor* Actor);
    
};

