#pragma once
#include "CoreMinimal.h"
#include "UWEDialogueSpeakerComponent.h"
#include "UWEDialoguePDASpeakerComponent.generated.h"

class UUWEDialogueViewModel;
class UUWEPDASubtitleDisplay;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEDIALOGUE_API UUWEDialoguePDASpeakerComponent : public UUWEDialogueSpeakerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<UUWEPDASubtitleDisplay> SubtitleDisplayClass;
    
private:
    UPROPERTY()
    UUWEDialogueViewModel* DialogueViewModel;
    
public:
    UUWEDialoguePDASpeakerComponent(const FObjectInitializer& ObjectInitializer);

};

