#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "UWEPlayerAlertsViewModel.generated.h"

class UUWEAlertSequence;

UCLASS()
class UWEDIALOGUE_API UUWEPlayerAlertsViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    UUWEAlertSequence* AlertToPlay;
    
    UUWEPlayerAlertsViewModel();

};

