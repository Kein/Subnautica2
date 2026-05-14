#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "Engine/EngineTypes.h"
#include "Engine/HitResult.h"
#include "GameplayTagContainer.h"
#include "Interactable.h"
#include "UWESaveObject.h"
#include "UWEInventoryInteractionComponent.generated.h"

class AActor;
class AController;
class APawn;
class UUWESaveHandle;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEINVENTORY_API UUWEInventoryInteractionComponent : public UBoxComponent, public IInteractable, public IUWESaveObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInventoryInteractionEnabledChanged, bool, InteractionEnabled);
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag InteractBeginCue;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag InteractEndCue;
    
    UPROPERTY(BlueprintAssignable)
    FOnInventoryInteractionEnabledChanged OnInventoryInteractionEnabledChanged;
    
    UPROPERTY(EditDefaultsOnly)
    FComponentReference InventoryComponent;
    
    UPROPERTY(BlueprintReadWrite)
    AActor* InventoryOwner;
    
    UPROPERTY(EditAnywhere, SaveGame, ReplicatedUsing=OnRep_InventoryInteractionEnabled)
    bool InventoryInteractionEnabled;
    
private:
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
public:
    UUWEInventoryInteractionComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetInventoryInteractionEnabled(bool InteractionEnabled);
    
protected:
    UFUNCTION()
    void OnRep_InventoryInteractionEnabled();
    
public:
    UFUNCTION(BlueprintCallable)
    void InteractWithInventoryInteractionComponent(AController* Controller, APawn* Pawn, const FHitResult& HitResult);
    

    // Fix for true pure virtual functions not being implemented
};

