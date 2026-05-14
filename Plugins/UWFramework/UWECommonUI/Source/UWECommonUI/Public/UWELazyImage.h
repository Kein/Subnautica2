#pragma once
#include "CoreMinimal.h"
#include "CommonLazyImage.h"
#include "UWELazyImage.generated.h"

class UTexture2D;

UCLASS()
class UWECOMMONUI_API UUWELazyImage : public UCommonLazyImage {
    GENERATED_BODY()
public:
    UUWELazyImage();

    UFUNCTION(BlueprintCallable)
    void SetBrushFromLazyTextureMatchingSize(const TSoftObjectPtr<UTexture2D>& LazyTexture);
    
    UFUNCTION(BlueprintCallable)
    void SetBrushFromLazyTextureKeepingSize(const TSoftObjectPtr<UTexture2D>& LazyTexture);
    
};

