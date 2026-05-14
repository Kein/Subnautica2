#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GPPNinePatchBox.generated.h"

class UHorizontalBox;
class UImage;
class USizeBox;
class UTexture2D;
class UVerticalBox;

UCLASS(EditInlineNew)
class ONLINESUBSYSTEMGPP_API UGPPNinePatchBox : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    USizeBox* SizeBox;
    
    UPROPERTY(Instanced)
    UVerticalBox* VerticalBox;
    
    UPROPERTY(Instanced)
    UHorizontalBox* HorizontalBoxTop;
    
    UPROPERTY(Instanced)
    UHorizontalBox* HorizontalBoxCenter;
    
    UPROPERTY(Instanced)
    UHorizontalBox* HorizontalBoxBottom;
    
    UPROPERTY(Instanced)
    UImage* Image_LeftTop;
    
    UPROPERTY(Instanced)
    UImage* Image_CenterTop;
    
    UPROPERTY(Instanced)
    UImage* Image_RightTop;
    
    UPROPERTY(Instanced)
    UImage* Image_LeftCenter;
    
    UPROPERTY(Instanced)
    UImage* Image_CenterCenter;
    
    UPROPERTY(Instanced)
    UImage* Image_RightCenter;
    
    UPROPERTY(Instanced)
    UImage* Image_LeftBottom;
    
    UPROPERTY(Instanced)
    UImage* Image_CenterBottom;
    
    UPROPERTY(Instanced)
    UImage* Image_RightBottom;
    
    UPROPERTY(EditAnywhere)
    uint32 CornerSize;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* Texture_LeftTop;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* Texture_CenterTop;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* Texture_RightTop;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* Texture_LeftCenter;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* Texture_CenterCenter;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* Texture_RightCenter;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* Texture_LeftBottom;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* Texture_CenterBottom;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* Texture_RightBottom;
    
public:
    UGPPNinePatchBox();

};

