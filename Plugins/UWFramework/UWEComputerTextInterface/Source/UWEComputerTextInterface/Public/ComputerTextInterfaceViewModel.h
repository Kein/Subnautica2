#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "ComputerTextInterfaceViewModel.generated.h"

class UUWEComputerTextInterfaceDialogueData;

UCLASS()
class UWECOMPUTERTEXTINTERFACE_API UComputerTextInterfaceViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDialogueClicked, UUWEComputerTextInterfaceDialogueData*, DialogueData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FBackClicked);
    
    UPROPERTY(BlueprintCallable)
    FDialogueClicked DialogueClickedEvent;
    
    UPROPERTY(BlueprintCallable)
    FBackClicked BackClickedEvent;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    TArray<UUWEComputerTextInterfaceDialogueData*> DialogueOptions;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<bool> DialoguesSeen;
    
    UPROPERTY(BlueprintReadOnly)
    bool ShowExitButton;
    
    UPROPERTY(BlueprintReadOnly)
    FText TerminalNameText;
    
    UPROPERTY(BlueprintReadOnly)
    FText TerminalFirstLineText;
    
public:
    UComputerTextInterfaceViewModel();

};

