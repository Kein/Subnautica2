#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SN2SubmarineSystemsWidget.generated.h"

class AUWESubmarine;

UCLASS(EditInlineNew)
class SUBNAUTICA2_API USN2SubmarineSystemsWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    AUWESubmarine* Submarine;
    
public:
    USN2SubmarineSystemsWidget();

    UFUNCTION(BlueprintCallable)
    void SetSubmarine(AUWESubmarine* InSubmarine);
    
private:
    UFUNCTION()
    void OnPowerChanged(float PowerPercentage);
    
    UFUNCTION()
    void OnOxygenLevelChanged(float NewOxygenLevel);
    
    UFUNCTION()
    void OnFilterEfficiencyChanged(float NewFilterEfficiency, float OldFilterEfficiency);
    
    UFUNCTION()
    void OnAlignmentChanged(float Alignment);
    
    UFUNCTION()
    void NativeOnFloodLevelChanged(float NewFloodLevel);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPOnTransistorAlignmentChanged(float Percentage);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPOnPowerChanged(float Percentage);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPOnOxygenChanged(float Percentage);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPOnOxygenatorFilterChanged(float Percentage);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPOnFloodLevelChanged(float Percentage);
    
};

