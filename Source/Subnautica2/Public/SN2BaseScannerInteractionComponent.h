#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SN2BaseScannerInteractionComponent.generated.h"

class ASN2BaseScannerStation;
class USN2BaseScannerStationFilterDataAsset;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2BaseScannerInteractionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USN2BaseScannerInteractionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Reliable, Server)
    void SetActiveFilter(ASN2BaseScannerStation* ScannerStation, USN2BaseScannerStationFilterDataAsset* Filter);
    
    UFUNCTION(Reliable, Server)
    void SelectPoint(ASN2BaseScannerStation* ScannerStation, int32 Point);
    
};

