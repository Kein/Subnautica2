#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "SN2BaseScannerStationSignalsForTag.h"
#include "SN2BaseScannerStationSignalsSubsystem.generated.h"

class USN2BaseScannerStationSignalComponent;

UCLASS(BlueprintType)
class SUBNAUTICA2_API USN2BaseScannerStationSignalsSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<FGameplayTag, FSN2BaseScannerStationSignalsForTag> Signals;
    
public:
    USN2BaseScannerStationSignalsSubsystem();

    UFUNCTION(BlueprintCallable)
    TSet<USN2BaseScannerStationSignalComponent*> GetSignalsForTagsInRadius(FGameplayTagContainer Tags, FVector Location, float Radius);
    
};

