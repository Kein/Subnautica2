#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "SN2LoadingScreenViewModel.generated.h"

class UObject;

UCLASS()
class SUBNAUTICA2_API USN2LoadingScreenViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    USN2LoadingScreenViewModel();

    UFUNCTION(BlueprintCallable)
    void UpdateSimulatedLoad(int32 InNumActive);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    void Update(UObject* WorldContext);
    
};

