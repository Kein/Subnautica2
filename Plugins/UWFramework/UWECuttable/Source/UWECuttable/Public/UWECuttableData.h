#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEActorDataAsset.h"
#include "UWECuttableData.generated.h"

class AActor;
class UActorComponent;
class UUWECuttableData;

UCLASS(EditInlineNew)
class UWECUTTABLE_API UUWECuttableData : public UUWEActorDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FGameplayTag HitAnimationOverrideTag;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FGameplayTag HitCueTag;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FGameplayTag BreakCueTag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<AActor> ResourceClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool CanBeDestroyed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 NumHitsToBreak;
    
    UUWECuttableData();

    UFUNCTION(BlueprintPure)
    static UUWECuttableData* GetCuttableDataForComponent(UActorComponent* ActorComponent);
    
    UFUNCTION(BlueprintPure)
    static UUWECuttableData* GetCuttableDataForActor(AActor* Actor);
    
};

