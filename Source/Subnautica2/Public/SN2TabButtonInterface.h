#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SN2TabDescriptor.h"
#include "SN2TabButtonInterface.generated.h"

UINTERFACE(Blueprintable)
class USN2TabButtonInterface : public UInterface {
    GENERATED_BODY()
};

class ISN2TabButtonInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    void SetTabLabelInfo(const FSN2TabDescriptor& TabDescriptor);
    
};

