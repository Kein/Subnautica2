#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "UWEPingSystemStatics.generated.h"

class APlayerState;
class UObject;
class UUWEPingData;
class UUWEPingSystemComponent;

UCLASS(BlueprintType)
class UWEPINGSYSTEM_API UUWEPingSystemStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWEPingSystemStatics();

    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPingVisibleToPlayer(UObject* WorldContextObject, const FGuid& UniqueID, const APlayerState* PlayerState);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UUWEPingSystemComponent* GetPingSystemComponent(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UUWEPingData* GetPingDataByType(FGameplayTag PingTypeTag);
    
};

