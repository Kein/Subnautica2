#pragma once
#include "CoreMinimal.h"
#include "DialogueInfo.generated.h"

class UUWEDialogueSequence;
class UUWEDialogueSpeakerComponent;

USTRUCT(BlueprintType)
struct FDialogueInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UUWEDialogueSequence* Dialogue;
    
    UPROPERTY(BlueprintReadOnly, Export)
    TWeakObjectPtr<UUWEDialogueSpeakerComponent> Speaker;
    
    UWEDIALOGUE_API FDialogueInfo();
};

