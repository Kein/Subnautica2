#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "EUWEMessageBoxType.h"
#include "Templates/SubclassOf.h"
#include "UWEMessageBoxOnCancelDelegate.h"
#include "UWEMessageBoxOnConfirmDelegate.h"
#include "UWEMessageBoxViewModel.generated.h"

class UModalActivatableWidget;
class UWorld;

UCLASS()
class UWENOTIFICATIONS_API UUWEMessageBoxViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FText HeaderText;
    
    UPROPERTY(BlueprintReadOnly)
    FText Text;
    
    UPROPERTY(BlueprintReadOnly)
    EUWEMessageBoxType Type;
    
    UPROPERTY(BlueprintReadOnly)
    UWorld* World;
    
    UPROPERTY(BlueprintReadOnly)
    TSubclassOf<UModalActivatableWidget> WidgetClass;
    
    UPROPERTY(BlueprintAssignable)
    FUWEMessageBoxOnConfirm OnConfirm;
    
    UPROPERTY(BlueprintAssignable)
    FUWEMessageBoxOnCancel OnCancel;
    
    UUWEMessageBoxViewModel();

    UFUNCTION(BlueprintCallable)
    void Close(bool bCancelled);
    
};

