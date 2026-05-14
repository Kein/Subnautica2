#pragma once
#include "CoreMinimal.h"
#include "UWEActorUIDCallbackWrapper.generated.h"

USTRUCT()
struct FUWEActorUIDCallbackWrapper {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    bool bExecuteOnce;
    
public:
    UWEACTORUID_API FUWEActorUIDCallbackWrapper();
};

