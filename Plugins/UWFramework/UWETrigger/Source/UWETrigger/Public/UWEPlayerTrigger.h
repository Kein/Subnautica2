#pragma once
#include "CoreMinimal.h"
#include "UWESaveObject.h"
#include "UWETriggerBase.h"
#include "UWEPlayerTrigger.generated.h"

class UBoxComponent;
class UUWESaveComponent;
class UUWESaveHandle;

UCLASS()
class UWETRIGGER_API AUWEPlayerTrigger : public AUWETriggerBase, public IUWESaveObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWESaveComponent* SaveComponent;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBoxComponent* BoxComponent;
    
private:
    UPROPERTY(AdvancedDisplay, SaveGame, VisibleAnywhere, ReplicatedUsing=OnRep_Triggered)
    bool bOnEnterTriggered;
    
    UPROPERTY(AdvancedDisplay, SaveGame, VisibleAnywhere, ReplicatedUsing=OnRep_Triggered)
    bool bOnExitTriggered;
    
    UPROPERTY(AdvancedDisplay, Replicated, SaveGame, VisibleAnywhere)
    TArray<int32> EnteredPlayerIds;
    
    UPROPERTY(AdvancedDisplay, Replicated, SaveGame, VisibleAnywhere)
    TArray<int32> ExitedPlayerIds;
    
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
public:
    AUWEPlayerTrigger(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnRep_Triggered();
    

    // Fix for true pure virtual functions not being implemented
};

