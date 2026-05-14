#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "Components/WidgetComponent.h"
#include "ESN2BarVisibilityCondition.h"
#include "SN2AttributeBarComponent.generated.h"

UCLASS(Abstract, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2AttributeBarComponent : public UWidgetComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayAttribute ValueAttribute;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayAttribute MaxValueAttribute;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ESN2BarVisibilityCondition VisibilityCondition;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer LocalPlayerTagRequirements;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DisappearDelay;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ThresholdPercent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bHideWhenLocallyControlled;
    
    USN2AttributeBarComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnPossessedChanged(bool bNewPossessed);
    
};

