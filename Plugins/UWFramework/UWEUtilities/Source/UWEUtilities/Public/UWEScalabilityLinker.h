#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UWEScalabilityLinker.generated.h"

UCLASS()
class UWEUTILITIES_API AUWEScalabilityLinker : public AActor {
    GENERATED_BODY()
public:
    AUWEScalabilityLinker(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    float GetCurrentViewDistanceScale();
    
};

