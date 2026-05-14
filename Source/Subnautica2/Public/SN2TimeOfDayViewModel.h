#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "EDayPhase.h"
#include "SN2TimeOfDayViewModel.generated.h"

class UUWETimeOfDayComponent;

UCLASS()
class SUBNAUTICA2_API USN2TimeOfDayViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 Hour;
    
    UPROPERTY(BlueprintReadOnly)
    int32 Minute;
    
    UPROPERTY(BlueprintReadOnly)
    float SunPivotAngle;
    
    UPROPERTY(BlueprintReadOnly)
    float SunsAngle;
    
    UPROPERTY(BlueprintReadOnly)
    EDayPhase DayPhase;
    
private:
    UPROPERTY(Instanced)
    UUWETimeOfDayComponent* TimeOfDayComponent;
    
public:
    USN2TimeOfDayViewModel();

    UFUNCTION()
    void Update();
    
};

