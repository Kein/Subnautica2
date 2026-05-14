#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EngineMode.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct FEngineMode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UGameplayEffect> EnergyConsumptionEffect;
    
    UPROPERTY(EditAnywhere)
    float MovementSpeed;
    
    UPROPERTY(EditAnywhere)
    float ForwardAcceleration;
    
    UPROPERTY(EditAnywhere)
    float VerticalAcceleration;
    
    UPROPERTY(EditAnywhere)
    float RotationSpeed;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag EngineModeTag;
    
    SUBNAUTICA2_API FEngineMode();
};

