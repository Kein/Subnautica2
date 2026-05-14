#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "AccelByteQrOptions.h"
#include "AccelByteQrImage.generated.h"

class UTexture2D;
class UTexture2DDynamic;

UCLASS()
class ONLINESUBSYSTEMGPP_API UAccelByteQrImage : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString QrText;
    
    UPROPERTY(EditAnywhere)
    FAccelByteQrOptions QrOptions;
    
private:
    UPROPERTY(Transient)
    UTexture2DDynamic* CurrentTextureDynamic;
    
    UPROPERTY(Transient)
    UTexture2D* CurrentLogo;
    
public:
    UAccelByteQrImage();

    UFUNCTION(BlueprintCallable)
    void SetQrText(const FString& Text);
    
    UFUNCTION(BlueprintCallable)
    void SetQrLogo(UTexture2D* Logo);
    
    UFUNCTION(BlueprintCallable)
    UTexture2DDynamic* GenerateQrTexture2DDynamic(int32 MaxTexSize, const FString& Text, const FAccelByteQrOptions& Options);
    
};

