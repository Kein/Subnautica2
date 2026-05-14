#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "SN2CustomizationItemViewModel.generated.h"

class UUSN2PlayerCustomizationViewModel;
class UUWEPlayerCustomizationItemDA;

UCLASS()
class SUBNAUTICA2_API USN2CustomizationItemViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UUWEPlayerCustomizationItemDA* CustomizationItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UUSN2PlayerCustomizationViewModel* ScreenViewModel;
    
    USN2CustomizationItemViewModel();

    UFUNCTION()
    void SetCustomizationItem(UUWEPlayerCustomizationItemDA* Item);
    
};

