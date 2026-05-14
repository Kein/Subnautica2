#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InputCoreTypes.h"
#include "GPPKeyImages.h"
#include "GPPKeyImageInfo.generated.h"

UCLASS()
class ONLINESUBSYSTEMGPP_API UGPPKeyImageInfo : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TMap<FKey, FGPPKeyImages> KeyImageList;
    
public:
    UGPPKeyImageInfo();

};

