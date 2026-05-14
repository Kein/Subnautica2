#pragma once
#include "CoreMinimal.h"
#include "UWEOverlapDetectorComponent.h"
#include "UWEMovingWaterCurrentComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEWATERCURRENTS_API UUWEMovingWaterCurrentComponent : public UUWEOverlapDetectorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float VelocityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ApplyLastVelocityOnExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DumpObjectVelocityAgainstWaterCurrent;
    
public:
    UUWEMovingWaterCurrentComponent(const FObjectInitializer& ObjectInitializer);

};

