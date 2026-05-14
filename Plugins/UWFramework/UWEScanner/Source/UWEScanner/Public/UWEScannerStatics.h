#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "UWEScannerStatics.generated.h"

class APlayerState;
class UObject;
class UUWEScanData;
class UUWEScannedActorsComponent;
class UUWEScannedActorsGameStateComponent;

UCLASS(BlueprintType)
class UWESCANNER_API UUWEScannerStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWEScannerStatics();

    UFUNCTION(BlueprintPure)
    static bool IsScanProgressSharedForClass(TSubclassOf<UUWEScanData> ScanDataClass);
    
    UFUNCTION(BlueprintPure)
    static bool IsScanProgressShared(UUWEScanData* ScanData);
    
    UFUNCTION(BlueprintPure)
    static bool IsScanDataFullyScannedForPlayer(UUWEScanData* ScanData, APlayerState* PlayerState);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UUWEScannedActorsGameStateComponent* GetScannedActorsGameStateComponent(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UUWEScannedActorsComponent* GetLocalScannedActorsComponent(UObject* WorldContextObject);
    
};

