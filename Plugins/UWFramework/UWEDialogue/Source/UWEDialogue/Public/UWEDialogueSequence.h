#pragma once
#include "CoreMinimal.h"
#include "DialogueLine.h"
#include "EUWEDialoguePriorityType.h"
#include "UWEDialogueNode.h"
#include "UWEDialogueSequence.generated.h"

class UUWEStoryEvent;

UCLASS(EditInlineNew)
class UWEDIALOGUE_API UUWEDialogueSequence : public UUWEDialogueNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FDialogueLine> Lines;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEStoryEvent* OnFinishedEvent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EUWEDialoguePriorityType Priority;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool Queueable;
    
    UUWEDialogueSequence();

};

