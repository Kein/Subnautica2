#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "GameplayTagContainer.h"
#include "MercunaNavLinkEndDelegate.h"
#include "MercunaNavLinkStartDelegate.h"
#include "MercunaNavigationLink.h"
#include "MercunaSupportedAgentTypes.h"
#include "MercunaUsageTypes.h"
#include "MercunaNavLinkComponent.generated.h"

class AMercunaNavGraph2D;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MERCUNA_API UMercunaNavLinkComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMercunaNavigationLink Link;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMercunaSupportedAgentTypes SupportedAgentTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAutoRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer Tags;
    
    UPROPERTY(BlueprintAssignable)
    FMercunaNavLinkStart OnNavLinkStart;
    
    UPROPERTY(BlueprintAssignable)
    FMercunaNavLinkEnd OnNavLinkEnd;
    
protected:
    UPROPERTY(EditInstanceOnly)
    bool bApplyToAllNavGrids;
    
    UPROPERTY(EditInstanceOnly)
    AMercunaNavGraph2D* NavGrid;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FMercunaUsageTypes UsageTypes;
    
    UPROPERTY(EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bInterGridLink;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TSoftObjectPtr<AMercunaNavGraph2D> LeftNavGrid;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TSoftObjectPtr<AMercunaNavGraph2D> RightNavGrid;
    
public:
    UMercunaNavLinkComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool NewBEnabled);
    
    UFUNCTION(BlueprintPure)
    bool InUse() const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetRightTransform() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetRightRotation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetRightPosition() const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetLeftTransform() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetLeftRotation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLeftPosition() const;
    
    UFUNCTION(BlueprintCallable)
    void AddToNavGrid(AMercunaNavGraph2D* NewNavGrid);
    
    UFUNCTION(BlueprintCallable)
    void AddToAllGrids();
    
    UFUNCTION(BlueprintCallable)
    void AddBetweenNavGrids(AMercunaNavGraph2D* NewLeftNavGrid, AMercunaNavGraph2D* NewRightNavGrid);
    
};

