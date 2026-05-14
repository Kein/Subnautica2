#pragma once
#include "CoreMinimal.h"
#include "UWESaveCallbacks.h"
#include "UWEBaseItem.h"
#include "UWEBaseEquippable.generated.h"

class UCommonUserWidget;
class USkeletalMeshComponent;
class UUWEAbilitySystemComponent;
class UUWEItemType;
class UUWESaveComponent;

UCLASS()
class UWEINVENTORY_API AUWEBaseEquippable : public AUWEBaseItem, public IUWESaveCallbacks {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    uint8 bEquippableHasBeenPickedUp: 1;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USkeletalMeshComponent* EquippedMesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<UCommonUserWidget> WidgetClass;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    UCommonUserWidget* CurrentWidget;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWESaveComponent* SaveComponent;
    
public:
    AUWEBaseEquippable(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RestoreEquipmentWidget();
    
    UFUNCTION(BlueprintPure)
    bool IsLocallyEquipped() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHiddenInToolbar() const;
    
    UFUNCTION(BlueprintCallable)
    void HideEquipmentWidget();
    
    UFUNCTION(BlueprintPure)
    FName GetSlotSocketName();
    
    UFUNCTION(BlueprintPure)
    UUWEAbilitySystemComponent* GetPlayerAbilitySystemComponent() const;
    
    UFUNCTION(BlueprintPure)
    UUWEItemType* GetEquippableItemType() const;
    

    // Fix for true pure virtual functions not being implemented
};

