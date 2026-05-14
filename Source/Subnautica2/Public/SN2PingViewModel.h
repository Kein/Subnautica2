#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MVVMViewModelBase.h"
#include "SN2PingViewModel.generated.h"

class UObject;
class UTexture2D;

UCLASS()
class SUBNAUTICA2_API USN2PingViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UObject* WorldContext;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsActive;
    
    UPROPERTY(BlueprintReadWrite)
    FText DisplayName;
    
    UPROPERTY(BlueprintReadOnly)
    FString Location;
    
    UPROPERTY(BlueprintReadOnly)
    UTexture2D* Thumbnail;
    
    UPROPERTY(BlueprintReadWrite)
    FLinearColor ThumbnailColor;
    
public:
    USN2PingViewModel();

    UFUNCTION(BlueprintCallable)
    void SetIsActive(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    bool GetIsActive();
    
};

