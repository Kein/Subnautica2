#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EMercunaModifierVolumeShape.h"
#include "MercunaAgentType.h"
#include "MercunaModifier.h"
#include "MercunaNavModifierComponent.h"
#include "MercunaUsageTypes.h"
#include "MercunaNavGridModifierComponent.generated.h"

class AMercunaNavGraph2D;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MERCUNA_API UMercunaNavGridModifierComponent : public UMercunaNavModifierComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    bool bApplyToAllNavGrids;
    
    UPROPERTY(EditInstanceOnly)
    TSoftObjectPtr<AMercunaNavGraph2D> NavGrid;
    
    UPROPERTY(EditInstanceOnly)
    FGameplayTagQuery GridTagQuery;
    
    UPROPERTY(EditAnywhere)
    EMercunaModifierVolumeShape Shape;
    
    UPROPERTY()
    TArray<FVector2D> PrismVertices;
    
    UPROPERTY(EditAnywhere)
    TMap<FMercunaAgentType, FMercunaModifier> PerAgentTypeModifiers;
    
public:
    UMercunaNavGridModifierComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetShape(EMercunaModifierVolumeShape NewShape);
    
    UFUNCTION(BlueprintCallable)
    void SetPrismVertices(const TArray<FVector2D>& NewVertices);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFromGrid();
    
    UFUNCTION(BlueprintCallable)
    void OverrideUsageTypes(const FMercunaAgentType& AgentType, const FMercunaUsageTypes& NewUsageTypes);
    
    UFUNCTION(BlueprintCallable)
    void OverrideCostMultiplier(const FMercunaAgentType& AgentType, float NewCostMultiplier);
    
    UFUNCTION(BlueprintPure)
    EMercunaModifierVolumeShape GetShape() const;
    
    UFUNCTION(BlueprintCallable)
    void AddToGrid(AMercunaNavGraph2D* NewNavGrid);
    
    UFUNCTION(BlueprintCallable)
    void AddToAllGrids(const FGameplayTagQuery NewGridTagQuery);
    
};

