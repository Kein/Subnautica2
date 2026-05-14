#pragma once
#include "CoreMinimal.h"
#include "UWEStoryEvent.h"
#include "UWEDialogueStoryEvent.generated.h"

class UUWEDialogueNode;

UCLASS(CollapseCategories, EditInlineNew)
class UWEDIALOGUE_API UUWEDialogueStoryEvent : public UUWEStoryEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UUWEDialogueNode> TriggeredDialogue;
    
    UUWEDialogueStoryEvent();

};

