#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "UWEDialogueViewModel.generated.h"

class UTexture2D;
class UUWEDialogueSpeakingCharacter;

UCLASS()
class UWEDIALOGUE_API UUWEDialogueViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    FText LineText;
    
    UPROPERTY(BlueprintReadOnly)
    bool ShouldUseSimpleSubtitles;
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<UUWEDialogueSpeakingCharacter> Speaker;
    
    UPROPERTY(BlueprintReadOnly)
    FText SpeakerName;
    
    UPROPERTY(BlueprintReadOnly)
    TSoftObjectPtr<UTexture2D> SpeakerIcon;
    
public:
    UUWEDialogueViewModel();

};

