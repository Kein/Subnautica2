#pragma once
#include "CoreMinimal.h"
#include "UWEGameStateBase.h"
#include "UWENetworkDiagnosticsInfoProvider.h"
#include "UWESonarInterface.h"
#include "Templates/SubclassOf.h"
#include "SN2GameState.generated.h"

class ASN2PlayerCharacter;
class USN2BlightNodesGameStateComponent;
class UUWEAbilitySystemComponent;
class UUWEBuilderItemsCullingComponent;
class UUWEDynamicEventsStateComponent;
class UUWEEventTrackerComponent;
class UUWEGameConfigComponent;
class UUWEGameplayTimeComponent;
class UUWEPingSystemComponent;
class UUWEScannedActorsGameStateComponent;
class UUWESculpturalBaseDebugComponent;
class UUWESculpturalBaseGlobalsComponent;
class UUWEStoryGoalContainerComponent;
class UUWETimeOfDayComponent;

UCLASS()
class SUBNAUTICA2_API ASN2GameState : public AUWEGameStateBase, public IUWESonarInterface, public IUWENetworkDiagnosticsInfoProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, Replicated)
    UUWEGameplayTimeComponent* GameplayTimeComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Replicated)
    UUWETimeOfDayComponent* TimeOfDayComponent;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_GameSessionId)
    FString GameSessionId;
    
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleAnywhere)
    int32 SonarGameId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<ASN2PlayerCharacter> PlayerCharacter;
    
protected:
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleAnywhere)
    int32 ServerBuildNumber;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEStoryGoalContainerComponent* StoryGoalContainerComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEGameConfigComponent* GameConfigComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Replicated)
    UUWEDynamicEventsStateComponent* DynamicEventsStateComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWESculpturalBaseDebugComponent* SculpturalBaseDebugComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWESculpturalBaseGlobalsComponent* SculpturalBaseGlobalsComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced, Replicated)
    UUWEPingSystemComponent* PingSystemComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEAbilitySystemComponent* UWEAbilitySystemComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UUWEEventTrackerComponent* EventTracker;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USN2BlightNodesGameStateComponent* BlightNodesGameStateComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UUWEScannedActorsGameStateComponent* ScannedActorsGameStateComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UUWEBuilderItemsCullingComponent* BuilderItemsCullingComponent;
    
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UUWETimeOfDayComponent> TimeOfDayComponentClass;
    
public:
    ASN2GameState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnSavingUnblocked();
    
    UFUNCTION()
    void OnSavingBlocked();
    
    UFUNCTION()
    void OnSaveStarted() const;
    
protected:
    UFUNCTION()
    void OnRep_GameSessionId();
    

    // Fix for true pure virtual functions not being implemented
};

