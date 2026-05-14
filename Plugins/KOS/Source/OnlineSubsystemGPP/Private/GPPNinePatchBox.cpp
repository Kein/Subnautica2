#include "GPPNinePatchBox.h"

UGPPNinePatchBox::UGPPNinePatchBox() : UUserWidget(FObjectInitializer::Get()) {
    this->SizeBox = NULL;
    this->VerticalBox = NULL;
    this->HorizontalBoxTop = NULL;
    this->HorizontalBoxCenter = NULL;
    this->HorizontalBoxBottom = NULL;
    this->Image_LeftTop = NULL;
    this->Image_CenterTop = NULL;
    this->Image_RightTop = NULL;
    this->Image_LeftCenter = NULL;
    this->Image_CenterCenter = NULL;
    this->Image_RightCenter = NULL;
    this->Image_LeftBottom = NULL;
    this->Image_CenterBottom = NULL;
    this->Image_RightBottom = NULL;
    this->CornerSize = 1;
    this->Texture_LeftTop = NULL;
    this->Texture_CenterTop = NULL;
    this->Texture_RightTop = NULL;
    this->Texture_LeftCenter = NULL;
    this->Texture_CenterCenter = NULL;
    this->Texture_RightCenter = NULL;
    this->Texture_LeftBottom = NULL;
    this->Texture_CenterBottom = NULL;
    this->Texture_RightBottom = NULL;
}


