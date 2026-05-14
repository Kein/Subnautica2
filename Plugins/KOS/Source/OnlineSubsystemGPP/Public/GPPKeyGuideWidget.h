#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Templates/SubclassOf.h"
#include "GPPKeyGuideWidget.generated.h"

class UGPPKeyImageInfo;
class UImage;
class UTextBlock;

UCLASS(EditInlineNew)
class ONLINESUBSYSTEMGPP_API UGPPKeyGuideWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UImage* Img_Key;
    
    UPROPERTY(Instanced)
    UTextBlock* T_GuideText;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGPPKeyImageInfo> KeyImageInfo;
    
public:
    UGPPKeyGuideWidget();

};

