#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "SN2PowerPlantControlStationLowerViewModel.generated.h"

class ASN2PowerPlantControlRoomLower;

UCLASS()
class SUBNAUTICA2_API USN2PowerPlantControlStationLowerViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNeedleDropStart, bool, Successful);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNeedleDropComplete);
    
protected:
    UPROPERTY(BlueprintReadOnly)
    bool AllOperationsComplete;
    
    UPROPERTY(BlueprintReadOnly)
    bool AllUpperOperationsComplete;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsConsoleActive;
    
    UPROPERTY(BlueprintReadOnly)
    bool NeedleBlocked;
    
    UPROPERTY(BlueprintReadOnly)
    bool NeedleIdle;
    
    UPROPERTY(BlueprintReadOnly)
    bool NeedleDroppedSuccessfully;
    
    UPROPERTY(BlueprintAssignable)
    FOnNeedleDropStart OnNeedleDropStart;
    
    UPROPERTY(BlueprintAssignable)
    FOnNeedleDropComplete OnNeedleDropComplete;
    
private:
    UPROPERTY()
    TWeakObjectPtr<ASN2PowerPlantControlRoomLower> ControlRoom;
    
public:
    USN2PowerPlantControlStationLowerViewModel();

    UFUNCTION(BlueprintCallable)
    void Setup(ASN2PowerPlantControlRoomLower* InControlRoom);
    
private:
    UFUNCTION()
    void OnNeedleLaunched(bool bLaunchSuccess);
    
    UFUNCTION()
    void OnNeedleCompleted();
    
    UFUNCTION()
    void OnNeedleBlockageRemoved();
    
    UFUNCTION()
    void OnConsoleActivated();
    
};

