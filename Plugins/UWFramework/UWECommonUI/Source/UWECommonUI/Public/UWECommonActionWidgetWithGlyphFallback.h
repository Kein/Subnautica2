#pragma once
#include "CoreMinimal.h"
#include "CommonActionWidget.h"
#include "Templates/SubclassOf.h"
#include "UWECommonActionWidgetWithGlyphFallback.generated.h"

class UCommonTextStyle;

UCLASS()
class UWECOMMONUI_API UUWECommonActionWidgetWithGlyphFallback : public UCommonActionWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UCommonTextStyle> TextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOnlyShowRimForGlyphFallback;
    
public:
    UUWECommonActionWidgetWithGlyphFallback();

};

