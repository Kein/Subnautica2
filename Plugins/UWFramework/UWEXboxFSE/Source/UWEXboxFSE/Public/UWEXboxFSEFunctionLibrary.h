#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UWEXboxFSEFunctionLibrary.generated.h"

UCLASS(BlueprintType, MinimalAPI)
class UUWEXboxFSEFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWEXboxFSEFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static bool IsDeviceXboxHandheldWinGDK();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDeviceXboxHandheld();
    
};

