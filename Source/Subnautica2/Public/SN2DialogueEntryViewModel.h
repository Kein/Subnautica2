#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "SN2DialogueEntryViewModel.generated.h"

class USN2DialogueEntryLineViewModel;
class UUWEDialogueSequence;

UCLASS()
class USN2DialogueEntryViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UUWEDialogueSequence* DialogueSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsPlaying;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<USN2DialogueEntryLineViewModel*> Lines;
    
public:
    USN2DialogueEntryViewModel();

    UFUNCTION()
    void SetIsPlaying(bool InIsPlaying);
    
    UFUNCTION(BlueprintPure)
    FString GetDebugText() const;
    
};

