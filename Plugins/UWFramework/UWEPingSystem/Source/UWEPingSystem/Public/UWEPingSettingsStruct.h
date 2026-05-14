#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEPingSettingsStruct.generated.h"

USTRUCT(BlueprintType)
struct FUWEPingSettingsStruct {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    int32 PlayerId;
    
    UPROPERTY(SaveGame)
    TArray<FGuid> HiddenPings;
    
    UWEPINGSYSTEM_API FUWEPingSettingsStruct();
};

