#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "SN2PlayerInSubmarineViewModel.generated.h"

UCLASS()
class SUBNAUTICA2_API USN2PlayerInSubmarineViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    bool IsInSubmarine;
    
    UPROPERTY(BlueprintReadWrite)
    bool HasOxygen;
    
    UPROPERTY(BlueprintReadWrite)
    bool HasPower;
    
    UPROPERTY(BlueprintReadWrite)
    float OxygenLevel;
    
    USN2PlayerInSubmarineViewModel();

};

