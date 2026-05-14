#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "Components/PanelSlot.h"
#include "UWESimpleGridSlot.generated.h"

UCLASS()
class UWECOMMONUI_API UUWESimpleGridSlot : public UPanelSlot {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    
public:
    UUWESimpleGridSlot();

    UFUNCTION(BlueprintCallable)
    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    
    UFUNCTION(BlueprintCallable)
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EVerticalAlignment> GetVerticalAlignment() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EHorizontalAlignment> GetHorizontalAlignment() const;
    
};

