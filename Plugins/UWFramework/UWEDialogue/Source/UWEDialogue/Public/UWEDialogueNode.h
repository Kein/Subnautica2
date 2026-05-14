#pragma once
#include "CoreMinimal.h"
#include "UWEPrimaryDataAssetBase.h"
#include "UWEDialogueNode.generated.h"

class UUWEDialogueSequence;

UCLASS(Abstract, EditInlineNew)
class UWEDIALOGUE_API UUWEDialogueNode : public UUWEPrimaryDataAssetBase {
    GENERATED_BODY()
public:
    UUWEDialogueNode();

    UFUNCTION(BlueprintCallable)
    UUWEDialogueSequence* GetDialogueSequenceToPlay();
    
};

