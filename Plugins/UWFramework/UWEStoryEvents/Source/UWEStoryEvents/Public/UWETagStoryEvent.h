#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEStoryEvent.h"
#include "UWETagStoryEvent.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UWESTORYEVENTS_API UUWETagStoryEvent : public UUWEStoryEvent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag EventTag;
    
    UUWETagStoryEvent();

};

