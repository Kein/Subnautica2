#pragma once
#include "CoreMinimal.h"
#include "CommonInputBaseTypes.h"
#include "UWESteamDeckControllerData.generated.h"

UCLASS(BlueprintType)
class UWESTEAMDECKRUNTIME_API UUWESteamDeckControllerData : public UCommonInputBaseControllerData {
    GENERATED_BODY()
public:
    UUWESteamDeckControllerData();

    UFUNCTION(BlueprintPure)
    static FName GetSteamDeckControllerName();
    
};

