#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEActorUID.h"
#include "UWEScannableActorData.generated.h"

USTRUCT(BlueprintType)
struct FUWEScannableActorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FUWEActorUID UID;
    
private:
    UPROPERTY(SaveGame)
    float InstanceScanProgress;
    
    UPROPERTY(SaveGame)
    bool InstanceScanned;
    
    UPROPERTY(SaveGame)
    FPrimaryAssetId ScanDataAssetId;
    
public:
    UWESCANNER_API FUWEScannableActorData();
};

