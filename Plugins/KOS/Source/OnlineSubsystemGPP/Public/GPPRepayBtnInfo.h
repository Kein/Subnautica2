#pragma once
#include "CoreMinimal.h"
#include "GPPRepayBtnInfo.generated.h"

USTRUCT(BlueprintType)
struct FGPPRepayBtnInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString RepayID;
    
    UPROPERTY(EditAnywhere)
    FText RepayProductName;
    
    UPROPERTY(EditAnywhere)
    FText RepayDateTime;
    
    UPROPERTY(EditAnywhere)
    FText RepayPrice;
    
    ONLINESUBSYSTEMGPP_API FGPPRepayBtnInfo();
};

