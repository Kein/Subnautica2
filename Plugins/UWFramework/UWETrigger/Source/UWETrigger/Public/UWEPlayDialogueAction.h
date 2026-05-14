#pragma once
#include "CoreMinimal.h"
#include "UWEPlayerTriggerAction.h"
#include "UWEPlayDialogueAction.generated.h"

class UUWEDialogueNode;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWETRIGGER_API UUWEPlayDialogueAction : public UUWEPlayerTriggerAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UUWEDialogueNode> Dialogue;
    
public:
    UUWEPlayDialogueAction(const FObjectInitializer& ObjectInitializer);

};

