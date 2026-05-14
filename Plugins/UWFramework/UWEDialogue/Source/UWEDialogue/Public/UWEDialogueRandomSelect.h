#pragma once
#include "CoreMinimal.h"
#include "UWEDialogueNode.h"
#include "UWEDialogueRandomSelect.generated.h"

UCLASS(EditInlineNew)
class UWEDIALOGUE_API UUWEDialogueRandomSelect : public UUWEDialogueNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    TArray<UUWEDialogueNode*> Options;
    
    UUWEDialogueRandomSelect();

};

