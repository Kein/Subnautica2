#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "UWEActorDataAsset.h"
#include "ResourceContent.h"
#include "UWEBreakableBase.generated.h"

class AActor;
class UGameplayEffect;
class UUWEBreakableBase;

UCLASS(Abstract, EditInlineNew)
class UWEBREAKABLE_API UUWEBreakableBase : public UUWEActorDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText ResourceNodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FResourceContent> Content;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag BreakCueTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<UGameplayEffect> BreakStimulusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag ResonatingCueTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer RequiredTagsToResonate;
    
    UUWEBreakableBase();

    UFUNCTION(BlueprintPure)
    bool InstigatorSatisfiesTagRequirements(AActor* InstigatorActor) const;
    
    UFUNCTION(BlueprintPure)
    static UUWEBreakableBase* GetBreakableBaseDataForActor(const AActor* Actor);
    
};

