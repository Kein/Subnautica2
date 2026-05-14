#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GPPKeyGuideInfo.h"
#include "GPPKeyGuideInputInfo.h"
#include "Templates/SubclassOf.h"
#include "GPPKeyGuideFooterWidget.generated.h"

class UGPPKeyGuideWidget;
class UHorizontalBox;

UCLASS(EditInlineNew)
class ONLINESUBSYSTEMGPP_API UGPPKeyGuideFooterWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FGPPKeyGuideInfo> LeftKeyGuideInfoList;
    
    UPROPERTY(EditAnywhere)
    TArray<FGPPKeyGuideInfo> RightKeyGuideInfoList;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGPPKeyGuideWidget> StickYGuideWidget;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGPPKeyGuideWidget> ButtonGuideWidget;
    
    UPROPERTY(EditAnywhere)
    float KeyGuidePadding;
    
    UPROPERTY(EditAnywhere)
    TArray<FGPPKeyGuideInputInfo> KeyGuideInputInfoList;
    
    UPROPERTY(Instanced)
    UHorizontalBox* HB_KeyGuide;
    
public:
    UGPPKeyGuideFooterWidget();

};

