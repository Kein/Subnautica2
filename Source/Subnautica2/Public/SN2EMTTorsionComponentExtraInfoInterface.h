#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EMTTorsionComponentExtraInfo.h"
#include "SN2EMTTorsionComponentExtraInfoInterface.generated.h"

UINTERFACE(Blueprintable)
class USN2EMTTorsionComponentExtraInfoInterface : public UInterface {
    GENERATED_BODY()
};

class ISN2EMTTorsionComponentExtraInfoInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FEMTTorsionComponentExtraInfo GetEMTPointExtraInfo() const;
    
};

