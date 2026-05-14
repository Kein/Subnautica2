#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/PrimitiveComponent.h"
#include "MercunaVolumeComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MERCUNA_API UMercunaVolumeComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FVector Size;
    
public:
    UMercunaVolumeComponent(const FObjectInitializer& ObjectInitializer);

};

