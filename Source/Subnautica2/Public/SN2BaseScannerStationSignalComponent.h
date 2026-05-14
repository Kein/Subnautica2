#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "SN2BaseScannerStationSignalComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2BaseScannerStationSignalComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FGameplayTag> ExplicitTags;
    
    USN2BaseScannerStationSignalComponent(const FObjectInitializer& ObjectInitializer);

};

