#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "UWESaveGameCustomInfoBaseViewModel.generated.h"

class UUWESaveGameCustomInfoBase;

UCLASS(Abstract)
class UWESAVESYSTEM_API UUWESaveGameCustomInfoBaseViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UUWESaveGameCustomInfoBase* CustomInfoInstance;
    
public:
    UUWESaveGameCustomInfoBaseViewModel();

};

