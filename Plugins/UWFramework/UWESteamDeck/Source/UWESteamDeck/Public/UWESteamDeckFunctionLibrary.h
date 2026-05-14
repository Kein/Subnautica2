#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UWESteamDeckFunctionLibrary.generated.h"

UCLASS(BlueprintType, MinimalAPI)
class UUWESteamDeckFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWESteamDeckFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static bool IsDeviceSteamDeck();
    
};

