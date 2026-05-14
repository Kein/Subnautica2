#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "MercunaUsageTypes.h"
#include "MercunaNavModifierVolume.generated.h"

class AMercunaNavGraph;
class UMercunaVolumeComponent;

UCLASS(NotPlaceable)
class MERCUNA_API AMercunaNavModifierVolume : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<AMercunaNavGraph> NavGraph;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UMercunaVolumeComponent* VolumeComponent;
    
    UPROPERTY(EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(EditAnywhere)
    float CostMultiplier;
    
    UPROPERTY(EditAnywhere)
    FMercunaUsageTypes UsageTypes;
    
public:
    AMercunaNavModifierVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUsageTypes(const FMercunaUsageTypes& NewUsageTypes);
    
    UFUNCTION(BlueprintCallable)
    void SetSize(FVector Size);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetCostMultiplier(float NewCostMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFromGraph();
    
    UFUNCTION(BlueprintPure)
    FVector GetSize() const;
    
    UFUNCTION(BlueprintCallable)
    void AddToGraph(AMercunaNavGraph* NewNavGraph);
    
};

