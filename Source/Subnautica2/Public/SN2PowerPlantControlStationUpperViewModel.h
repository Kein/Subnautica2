#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "SN2PowerPlantControlStationUpperViewModel.generated.h"

class AActor;
class ASN2PowerPlantControlRoomUpper;

UCLASS()
class SUBNAUTICA2_API USN2PowerPlantControlStationUpperViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActivationAttempt, bool, Successful);
    
protected:
    UPROPERTY(BlueprintReadOnly)
    bool AllOperationsComplete;
    
    UPROPERTY(BlueprintReadOnly)
    bool AllLowerOperationsComplete;
    
    UPROPERTY(BlueprintReadOnly)
    bool Powered;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsConsoleActive;
    
    UPROPERTY(BlueprintReadOnly)
    bool Activated;
    
    UPROPERTY(BlueprintAssignable)
    FOnActivationAttempt OnActivationAttempt;
    
private:
    UPROPERTY()
    TWeakObjectPtr<ASN2PowerPlantControlRoomUpper> ControlRoom;
    
public:
    USN2PowerPlantControlStationUpperViewModel();

    UFUNCTION(BlueprintCallable)
    void Setup(ASN2PowerPlantControlRoomUpper* InControlRoom);
    
private:
    UFUNCTION()
    void OnPowerPlantPowered();
    
    UFUNCTION()
    void OnPowered();
    
    UFUNCTION()
    void OnLowerNeedleConnected();
    
    UFUNCTION()
    void OnConsoleActivated();
    
    UFUNCTION()
    void OnCodeActivated(const AActor* TriggerActor, bool bActivationSuccess);
    
};

