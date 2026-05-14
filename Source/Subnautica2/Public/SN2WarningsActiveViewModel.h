#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MVVMViewModelBase.h"
#include "SN2WarningsActiveViewModel.generated.h"

class UObject;

UCLASS()
class SUBNAUTICA2_API USN2WarningsActiveViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    UObject* WorldContextObject;
    
    UPROPERTY(BlueprintReadOnly)
    bool WarningsActive;
    
    USN2WarningsActiveViewModel();

protected:
    UFUNCTION()
    void OnWarningBlockingTagChanged(FGameplayTag GameplayTag, int32 NewCount);
    
    UFUNCTION()
    void OnLocalClientReady();
    
};

