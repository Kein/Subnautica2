#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MercunaModifier.h"
#include "MercunaUsageTypes.h"
#include "MercunaVolumeComponent.h"
#include "MercunaNavModifierComponent.generated.h"

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MERCUNA_API UMercunaNavModifierComponent : public UMercunaVolumeComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(EditAnywhere)
    FMercunaModifier Modifier;
    
public:
    UMercunaNavModifierComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUsageTypes(const FMercunaUsageTypes& NewUsageTypes);
    
    UFUNCTION(BlueprintCallable)
    void SetSize(FVector NewSize);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetCostMultiplier(float NewCostMultiplier);
    
    UFUNCTION(BlueprintPure)
    FVector GetSize() const;
    
};

