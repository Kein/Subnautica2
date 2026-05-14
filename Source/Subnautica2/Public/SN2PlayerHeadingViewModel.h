#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "SN2PlayerHeadingViewModel.generated.h"

UCLASS()
class SUBNAUTICA2_API USN2PlayerHeadingViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    float Heading;
    
    UPROPERTY(BlueprintReadOnly)
    float Depth;
    
    UPROPERTY(BlueprintReadOnly)
    float CrushDepth;
    
    UPROPERTY(BlueprintReadOnly)
    bool bShowCrushDepth;
    
public:
    USN2PlayerHeadingViewModel();

};

