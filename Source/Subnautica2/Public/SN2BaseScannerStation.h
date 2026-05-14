#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "EUWEWindowManagerLayer.h"
#include "UWEEventKey.h"
#include "Interactable.h"
#include "UWESeededResourceInfo.h"
#include "SN2ActiveScannerPoint.h"
#include "Templates/SubclassOf.h"
#include "SN2BaseScannerStation.generated.h"

class UBoxComponent;
class UCommonActivatableWidget;
class UInstancedStaticMeshComponent;
class UModalActivatableWidget;
class USN2BaseScannerStationFilterDataAsset;
class UUWEPoweredApplianceComponent;
class UUWESaveComponent;
class UUWEWaitDistanceExceeded;

UCLASS()
class SUBNAUTICA2_API ASN2BaseScannerStation : public AActor, public IInteractable {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAllowedFiltersChanged, const TArray<USN2BaseScannerStationFilterDataAsset*>&, AllowedFilters);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActiveFilterChanged, USN2BaseScannerStationFilterDataAsset*, ActiveFilter);
    
    UPROPERTY(BlueprintAssignable)
    FOnActiveFilterChanged OnActiveFilterChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnAllowedFiltersChanged OnAllowedFiltersChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBoxComponent* ScreenInteraction;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEPoweredApplianceComponent* PoweredApplianceComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWESaveComponent* SaveComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UInstancedStaticMeshComponent* Points;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ScannerRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ScannerHalfHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PointCloudRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FFloatRange PointScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxPointScaleAtCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxPointCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float UpdateInterval;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FiltersUpdateInterval;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinDistanceToCreateNewPoints;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString ScreenInteractionPrimaryTextString;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag ScreenInteractionTypeTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString PointsInteractionPrimaryTextString;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag PointsInteractionTypeTag;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<UModalActivatableWidget> InteractionWidgetClass;
    
private:
    UPROPERTY(SaveGame, ReplicatedUsing=OnRep_ActiveFilter)
    USN2BaseScannerStationFilterDataAsset* ActiveFilter;
    
    UPROPERTY(SaveGame, ReplicatedUsing=OnRep_SelectedPointIndex)
    int32 SelectedPointIndex;
    
    UPROPERTY(ReplicatedUsing=OnRep_AvailableFilters)
    TArray<USN2BaseScannerStationFilterDataAsset*> AvailableFilters;
    
    UPROPERTY(ReplicatedUsing=OnRep_ActivePoints)
    TArray<FSN2ActiveScannerPoint> ActivePoints;
    
    UPROPERTY()
    int32 LastPointCount;
    
    UPROPERTY(Transient)
    TArray<FTransform> PointTransforms;
    
    UPROPERTY(Transient)
    TArray<FUWESeededResourceInfo> ResourceBuffer;
    
    UPROPERTY(Transient)
    TMap<FIntVector, FSN2ActiveScannerPoint> ActivePointMap;
    
    UPROPERTY(Instanced)
    UCommonActivatableWidget* ScreenWidget;
    
    UPROPERTY()
    UUWEWaitDistanceExceeded* DistanceTask;
    
    UPROPERTY()
    TArray<USN2BaseScannerStationFilterDataAsset*> AllFilters;
    
public:
    ASN2BaseScannerStation(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void UpdatePoints();
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void SetSelectedPointData(FVector PointCloudWorldLocation, FSN2ActiveScannerPoint Info);
    
private:
    UFUNCTION()
    void OnWidgetPopped(TEnumAsByte<EUWEWindowManagerLayer> LayerId, bool bIsLast, TSubclassOf<UCommonActivatableWidget> Class);
    
    UFUNCTION()
    void OnRep_SelectedPointIndex();
    
    UFUNCTION()
    void OnRep_AvailableFilters();
    
    UFUNCTION()
    void OnRep_ActivePoints(const TArray<FSN2ActiveScannerPoint>& PriorPoints);
    
    UFUNCTION()
    void OnRep_ActiveFilter();
    
    UFUNCTION()
    void OnPowerStateChanged(bool bNewIsPowered);
    
    UFUNCTION()
    void OnFilterUnlocked(FUWEEventKey EventKey, int32 OldValue, int32 NewValue);
    
public:
    UFUNCTION(BlueprintPure)
    float GetScanRadius() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetPointCloudPosition(const FVector& WorldPosition) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumActivePoints() const;
    
    UFUNCTION(BlueprintPure)
    TArray<USN2BaseScannerStationFilterDataAsset*> GetAllowedFilters() const;
    
    UFUNCTION(BlueprintPure)
    USN2BaseScannerStationFilterDataAsset* GetActiveFilter() const;
    
private:
    UFUNCTION()
    void CloseUI();
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void ClearSelectedPoint();
    

    // Fix for true pure virtual functions not being implemented
};

