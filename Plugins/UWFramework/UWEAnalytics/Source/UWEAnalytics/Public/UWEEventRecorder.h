#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UWEEventRecorder.generated.h"

UINTERFACE(Blueprintable)
class UUWEEventRecorder : public UInterface {
    GENERATED_BODY()
};

class IUWEEventRecorder : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CollectEventAttributes(TMap<FString, FString>& Attributes, bool bVerbose);
    
};

