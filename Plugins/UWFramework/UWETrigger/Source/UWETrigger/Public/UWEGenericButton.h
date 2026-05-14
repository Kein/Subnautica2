#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Interactable.h"
#include "UWESaveObject.h"
#include "EUWEButtonInteractabilityState.h"
#include "UWETriggerBase.h"
#include "UWEGenericButton.generated.h"

class AActor;
class APawn;
class UUWEDialogueNode;
class UUWESaveComponent;
class UUWESaveHandle;

UCLASS(Abstract)
class UWETRIGGER_API AUWEGenericButton : public AUWETriggerBase, public IInteractable, public IUWESaveObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTimeLastTriggeredChangedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnToggled);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteractabilityToggled, bool, NewState);
    
    UPROPERTY(BlueprintAssignable)
    FTimeLastTriggeredChangedDelegate OnTimeLastTriggeredChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnToggled OnToggled;
    
    UPROPERTY(BlueprintAssignable)
    FOnInteractabilityToggled OnInteractabilityToggled;
    
    UPROPERTY(EditAnywhere)
    FString DisplayTextKey;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag InteractType;
    
    UPROPERTY(EditAnywhere)
    float Cooldown;
    
    UPROPERTY(EditAnywhere)
    TArray<UUWEDialogueNode*> DialogueToPlayOnSuccess;
    
    UPROPERTY(EditAnywhere)
    float MaxInteractionDistance;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Replicated, SaveGame, VisibleAnywhere)
    bool bTriggered;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, SaveGame, VisibleAnywhere, ReplicatedUsing=OnRep_TurnedOn)
    bool bTurnedOn;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditInstanceOnly, SaveGame, ReplicatedUsing=OnRep_InteractableState)
    EUWEButtonInteractabilityState InteractableState;
    
    UPROPERTY(AdvancedDisplay, Replicated, SaveGame, VisibleAnywhere)
    TArray<int32> TriggeredPlayerIds;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, SaveGame, VisibleAnywhere, ReplicatedUsing=OnRep_TimeLastTriggered)
    float TimeLastTriggered;
    
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UUWESaveComponent* SaveComponent;
    
private:
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    double ClientTimeLastTriggered;
    
public:
    AUWEGenericButton(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetInteractabilityOn();
    
    UFUNCTION(BlueprintCallable)
    void SetInteractabilityOff();
    
private:
    UFUNCTION()
    void OnRep_TurnedOn();
    
    UFUNCTION()
    void OnRep_TimeLastTriggered();
    
    UFUNCTION()
    void OnRep_InteractableState();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnButtonPressed();
    
    UFUNCTION(BlueprintPure)
    bool IsInteractable() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAlreadyTriggeredForPlayer(AActor* Player) const;
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void BroadcastButtonPressed(APawn* InteractingPawn);
    

    // Fix for true pure virtual functions not being implemented
};

