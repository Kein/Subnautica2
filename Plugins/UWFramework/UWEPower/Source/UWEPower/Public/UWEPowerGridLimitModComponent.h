#pragma once
#include "CoreMinimal.h"
#include "UWEPowerNodeComponent.h"
#include "UWEPowerGridLimitModComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEPOWER_API UUWEPowerGridLimitModComponent : public UUWEPowerNodeComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float PowerGridMod;
    
public:
    UUWEPowerGridLimitModComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    float GetPowerGridMod() const;
    
};

