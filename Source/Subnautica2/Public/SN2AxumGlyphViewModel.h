#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "SN2AxumGlyphViewModel.generated.h"

class UTexture2D;

UCLASS()
class SUBNAUTICA2_API USN2AxumGlyphViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUnlockStateChanged);
    
    UPROPERTY()
    FOnUnlockStateChanged OnUnlockStateChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    FText Word;
    
    UPROPERTY(BlueprintReadOnly)
    TSoftObjectPtr<UTexture2D> GlyphTexture;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsUnlocked;
    
public:
    USN2AxumGlyphViewModel();

protected:
    UFUNCTION()
    void UpdateUnlockState();
    
};

