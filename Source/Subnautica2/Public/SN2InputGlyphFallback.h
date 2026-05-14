#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "SN2InputGlyphFallback.generated.h"

class UCommonTextBlock;

UCLASS(EditInlineNew)
class SUBNAUTICA2_API USN2InputGlyphFallback : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UCommonTextBlock* TextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Text;
    
    USN2InputGlyphFallback();

};

