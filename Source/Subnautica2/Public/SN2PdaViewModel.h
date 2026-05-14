#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "EUWEWindowManagerLayer.h"
#include "NotificationData.h"
#include "Templates/SubclassOf.h"
#include "SN2PdaViewModel.generated.h"

class UCommonActivatableWidget;
class UObject;
class USN2InventoryScreenViewModel;
class USN2PdaViewModel;
class UUWEEquipmentComponent;
class UUWEInventoryComponent;
class UUWEInventoryInteractionComponent;
class UUWENotificationComponent;
class UUWEPrimaryDataAssetBase;
class UUWEToolbarComponent;
class UUWEWaitDistanceExceeded;

UCLASS()
class SUBNAUTICA2_API USN2PdaViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    bool IsActive;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsModifierHeld;
    
    UPROPERTY(BlueprintReadWrite)
    FName ActiveTab;
    
    UPROPERTY(BlueprintReadWrite)
    FName DesiredTab;
    
    UPROPERTY(BlueprintReadWrite)
    TSoftObjectPtr<UUWEPrimaryDataAssetBase> DesiredDataAsset;
    
    UPROPERTY(BlueprintReadOnly)
    USN2InventoryScreenViewModel* InventoryScreen;
    
    UPROPERTY(Instanced)
    UUWEInventoryComponent* InventoryComponent;
    
    UPROPERTY(Instanced)
    UUWEEquipmentComponent* EquipmentComponent;
    
    UPROPERTY(Instanced)
    UUWEToolbarComponent* ToolbarComponent;
    
    UPROPERTY(Instanced)
    UUWENotificationComponent* NotificationComponent;
    
    UPROPERTY()
    UUWEWaitDistanceExceeded* DistanceTask;
    
    UPROPERTY(Instanced)
    UCommonActivatableWidget* Widget;
    
    UPROPERTY(Instanced)
    UUWEInventoryInteractionComponent* CurrentInventoryInteractionComponent;
    
public:
    USN2PdaViewModel();

    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContext"))
    static USN2PdaViewModel* TryGetPDAViewModel(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    void ShowPDA();
    
    UFUNCTION(BlueprintCallable)
    void SetIsModifierHeld(bool NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetIsActive(bool NewState);
    
protected:
    UFUNCTION()
    void OnWidgetPopped(TEnumAsByte<EUWEWindowManagerLayer> LayerId, bool bIsLast, TSubclassOf<UCommonActivatableWidget> Class);
    
    UFUNCTION()
    void OnNotificationStarted(const FNotificationData& NotificationData);
    
public:
    UFUNCTION(BlueprintCallable)
    void HidePDA();
    
};

