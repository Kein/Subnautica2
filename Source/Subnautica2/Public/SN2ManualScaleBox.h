#pragma once
#include "CoreMinimal.h"
#include "Components/ScaleBox.h"
#include "SN2ManualScaleBox.generated.h"

UCLASS()
class USN2ManualScaleBox : public UScaleBox {
    GENERATED_BODY()
public:
    USN2ManualScaleBox();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void RefreshScale() const;
    
};

