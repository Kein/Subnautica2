#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "SN2RadioViewModel.generated.h"

class UObject;
class UUWEComputerTextInterfaceDialogueData;

UCLASS()
class SUBNAUTICA2_API USN2RadioViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<UUWEComputerTextInterfaceDialogueData*> RadioMessages;
    
private:
    UPROPERTY()
    UObject* WorldContextObject;
    
public:
    USN2RadioViewModel();

    UFUNCTION()
    void RemoveRadioMessage(UUWEComputerTextInterfaceDialogueData* RadioData);
    
private:
    UFUNCTION()
    void OnLocalClientReady();
    
public:
    UFUNCTION()
    void AddRadioMessage(UUWEComputerTextInterfaceDialogueData* RadioData);
    
};

