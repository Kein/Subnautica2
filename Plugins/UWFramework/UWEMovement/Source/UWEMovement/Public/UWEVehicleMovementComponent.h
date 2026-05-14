#pragma once
#include "CoreMinimal.h"
#include "UWECharacterMovementComponentBase.h"
#include "UWEVehicleMovementComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEMOVEMENT_API UUWEVehicleMovementComponent : public UUWECharacterMovementComponentBase {
    GENERATED_BODY()
public:
    UUWEVehicleMovementComponent(const FObjectInitializer& ObjectInitializer);

};

