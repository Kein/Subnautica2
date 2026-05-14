#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEPrimaryDataAssetBase.h"
#include "UWEStoryEvent.generated.h"

UCLASS(Abstract, CollapseCategories, DefaultToInstanced, EditInlineNew)
class UWESTORYEVENTS_API UUWEStoryEvent : public UUWEPrimaryDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag IdentifierTag;
    
    UUWEStoryEvent();

};

