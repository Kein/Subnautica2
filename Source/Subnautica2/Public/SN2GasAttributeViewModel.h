#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "MVVMViewModelBase.h"
#include "SN2GasAttributeViewModel.generated.h"

class UAbilitySystemComponent;

UCLASS()
class SUBNAUTICA2_API USN2GasAttributeViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayAttribute ValueAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayAttribute MaxValueAttribute;
    
    UPROPERTY(BlueprintReadOnly)
    float Value;
    
    UPROPERTY(BlueprintReadOnly)
    float MaxValue;
    
    UPROPERTY(BlueprintReadOnly)
    float Percentage;
    
public:
    USN2GasAttributeViewModel();

    UFUNCTION(BlueprintCallable)
    void Initialize(UAbilitySystemComponent* InASC, FGameplayAttribute InValueAttribute, FGameplayAttribute InMaxValueAttribute);
    
};

