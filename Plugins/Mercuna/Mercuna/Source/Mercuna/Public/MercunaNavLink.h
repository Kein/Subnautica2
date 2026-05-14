#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "EMercunaNavigationLinkDirection.h"
#include "MercunaNavLinkStartDelegate.h"
#include "MercunaNavigationLink.h"
#include "MercunaSupportedAgentTypes.h"
#include "MercunaUsageTypes.h"
#include "MercunaNavLink.generated.h"

class AMercunaNavGraph2D;
class APawn;
class UMercunaNavLinkComponent;

UCLASS(Abstract)
class MERCUNA_API AMercunaNavLink : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMercunaNavLinkStart OnNavLinkStart;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UMercunaNavLinkComponent* NavLinkComponent;
    
private:
    UPROPERTY()
    FMercunaNavigationLink Link;
    
    UPROPERTY()
    FMercunaSupportedAgentTypes SupportedAgentTypes;
    
    UPROPERTY()
    bool bAutoRotation;
    
    UPROPERTY()
    FName TypeTag;
    
    UPROPERTY()
    bool bApplyToAllNavGrids;
    
    UPROPERTY()
    AMercunaNavGraph2D* NavGrid;
    
    UPROPERTY()
    FMercunaUsageTypes UsageTypes;
    
    UPROPERTY()
    bool bEnabled;
    
    UPROPERTY()
    bool bInterGridLink;
    
    UPROPERTY()
    TSoftObjectPtr<AMercunaNavGraph2D> LeftNavGrid;
    
    UPROPERTY()
    TSoftObjectPtr<AMercunaNavGraph2D> RightNavGrid;
    
public:
    AMercunaNavLink(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool NewBEnabled);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveNavLinkStart(APawn* Pawn, EMercunaNavigationLinkDirection Direction, FVector Destination);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveNavLinkEnd(APawn* Pawn);
    
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
    void AddToNavGrid(AMercunaNavGraph2D* NewNavGrid, FMercunaNavigationLink NewLink, FMercunaSupportedAgentTypes NewSupportedAgentTypes, FMercunaUsageTypes NewUsageTypes, FGameplayTagContainer LinkTags);
    
    UFUNCTION(BlueprintCallable)
    void AddToAllGrids(FMercunaNavigationLink NewLink, FMercunaSupportedAgentTypes NewSupportedAgentTypes, FMercunaUsageTypes NewUsageTypes, FGameplayTagContainer LinkTags);
    
    UFUNCTION(BlueprintCallable)
    void AddBetweenNavGrids(AMercunaNavGraph2D* NewLeftNavGrid, AMercunaNavGraph2D* NewRightNavGrid, FMercunaNavigationLink NewLink, FMercunaSupportedAgentTypes NewSupportedAgentTypes, FMercunaUsageTypes NewUsageTypes, FGameplayTagContainer LinkTags);
    
};

