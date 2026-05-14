#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UWEPlayerReadyStatics.generated.h"

UCLASS(BlueprintType)
class UWEPLAYERREADY_API UUWEPlayerReadyStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWEPlayerReadyStatics();

    UFUNCTION(BlueprintCallable)
    static bool CheckClientHasAllDependencies();
    
};

