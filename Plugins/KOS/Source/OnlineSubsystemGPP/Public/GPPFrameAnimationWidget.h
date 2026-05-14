#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GPPFrameAnimationWidget.generated.h"

class UImage;
class UTexture2D;

UCLASS(EditInlineNew)
class ONLINESUBSYSTEMGPP_API UGPPFrameAnimationWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UImage* Img_Frame;
    
    UPROPERTY(EditAnywhere)
    TArray<UTexture2D*> FrameImageList;
    
    UPROPERTY(EditAnywhere)
    float SecondsForFrame;
    
public:
    UGPPFrameAnimationWidget();

};

