#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Interface.h"
#include "UWECustomActorUIDInterface.generated.h"

UINTERFACE(Blueprintable)
class UWEACTORUID_API UUWECustomActorUIDInterface : public UInterface {
    GENERATED_BODY()
};

class UWEACTORUID_API IUWECustomActorUIDInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGuid GetCustomActorUID() const;
    
};

