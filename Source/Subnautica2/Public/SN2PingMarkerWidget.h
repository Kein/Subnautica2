#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "SN2PingMarkerWidget.generated.h"

class UCommonTextBlock;
class UImage;

UCLASS(EditInlineNew)
class SUBNAUTICA2_API USN2PingMarkerWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UCommonTextBlock* Name;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UCommonTextBlock* DistanceText;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UImage* Icon;
    
    USN2PingMarkerWidget();

};

