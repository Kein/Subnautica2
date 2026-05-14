#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EUWEMessageBoxType.h"
#include "ShowPopupPinConfirmDelegate.h"
#include "UWEMessageBoxAsync.generated.h"

class UObject;
class UUWEMessageBoxAsync;

UCLASS()
class UWENOTIFICATIONS_API UUWEMessageBoxAsync : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FShowPopupPinConfirm Confirm;
    
    UPROPERTY(BlueprintAssignable)
    FShowPopupPinConfirm Cancel;
    
    UUWEMessageBoxAsync();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UUWEMessageBoxAsync* ShowMessageBox(UObject* WorldContextObject, FText Message, FText Title, EUWEMessageBoxType Type);
    
private:
    UFUNCTION()
    void OnConfirm();
    
    UFUNCTION()
    void OnCancel();
    
    UFUNCTION()
    void Close(bool bCancel);
    
};

