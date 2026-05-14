#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UWETestingHelpers.generated.h"

UCLASS(BlueprintType)
class UWEAUTOMATIONTESTING_API UUWETestingHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWETestingHelpers();

    UFUNCTION(BlueprintCallable)
    static void UWETestFlushAsyncLoading();
    
};

