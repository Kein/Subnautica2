#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "EMercunaModifierVolumeShape.h"
#include "MercunaAgentType.h"
#include "MercunaUsageTypes.h"
#include "MercunaNavGridModifierVolume.generated.h"

class AMercunaNavGraph2D;
class UMercunaNavGridModifierComponent;

UCLASS()
class MERCUNA_API AMercunaNavGridModifierVolume : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UMercunaNavGridModifierComponent* VolumeComponent;
    
public:
    AMercunaNavGridModifierVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUsageTypes(const FMercunaUsageTypes& NewUsageTypes);
    
    UFUNCTION(BlueprintCallable)
    void SetSize(FVector Size);
    
    UFUNCTION(BlueprintCallable)
    void SetShape(EMercunaModifierVolumeShape NewShape);
    
    UFUNCTION(BlueprintCallable)
    void SetPrismVertices(const TArray<FVector2D>& NewVertices);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetCostMultiplier(float NewCostMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFromGrid();
    
    UFUNCTION(BlueprintCallable)
    void OverrideUsageTypes(const FMercunaAgentType& AgentType, const FMercunaUsageTypes& NewUsageTypes);
    
    UFUNCTION(BlueprintCallable)
    void OverrideCostMultiplier(const FMercunaAgentType& AgentType, float NewCostMultiplier);
    
    UFUNCTION(BlueprintPure)
    FVector GetSize() const;
    
    UFUNCTION(BlueprintPure)
    EMercunaModifierVolumeShape GetShape() const;
    
    UFUNCTION(BlueprintCallable)
    void AddToGrid(AMercunaNavGraph2D* NavGrid);
    
    UFUNCTION(BlueprintCallable)
    void AddToAllGrids(const FGameplayTagQuery GridTagQuery);
    
};

