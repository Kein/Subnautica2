#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SN2SubmarineDamageWidget.generated.h"

UCLASS(EditInlineNew)
class SUBNAUTICA2_API USN2SubmarineDamageWidget : public UUserWidget {
    GENERATED_BODY()
public:
    USN2SubmarineDamageWidget();

    UFUNCTION(BlueprintImplementableEvent)
    void SetSubsystemName(const FString& Name);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetDamagePercentage(float Percentage);
    
};

