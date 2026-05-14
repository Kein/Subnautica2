#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "SN2ReloadPromptsViewModel.generated.h"

class AActor;

UCLASS()
class SUBNAUTICA2_API USN2ReloadPromptsViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    bool IsReloadWidgetActive;
    
    UPROPERTY(BlueprintReadWrite)
    bool ShowNoBatteries;
    
    UPROPERTY(BlueprintReadWrite)
    bool ShowLoad;
    
    UPROPERTY(BlueprintReadWrite)
    bool ShowUnload;
    
public:
    USN2ReloadPromptsViewModel();

    UFUNCTION(BlueprintCallable)
    void UpdateBatteriesAvailable(AActor* Actor);
    
    UFUNCTION()
    void SetShowUnload(bool bValue);
    
    UFUNCTION()
    void SetShowNoBatteries(bool bValue);
    
    UFUNCTION()
    void SetShowLoad(bool bValue);
    
    UFUNCTION()
    void SetIsReloadWidgetActive(bool InIsActive);
    
};

