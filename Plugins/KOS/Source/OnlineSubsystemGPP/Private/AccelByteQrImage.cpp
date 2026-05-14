#include "AccelByteQrImage.h"

UAccelByteQrImage::UAccelByteQrImage() {
    this->CurrentTextureDynamic = NULL;
    this->CurrentLogo = NULL;
}

void UAccelByteQrImage::SetQrText(const FString& Text) {
}

void UAccelByteQrImage::SetQrLogo(UTexture2D* Logo) {
}

UTexture2DDynamic* UAccelByteQrImage::GenerateQrTexture2DDynamic(int32 MaxTexSize, const FString& Text, const FAccelByteQrOptions& Options) {
    return NULL;
}


