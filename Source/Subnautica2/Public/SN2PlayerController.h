#pragma once
#include "CoreMinimal.h"
#include "LoadingProcessInterface.h"
#include "Net/Core/Connection/NetEnums.h"
#include "EUWEWindowManagerLayer.h"
#include "UWEGameplayPlayerController.h"
#include "UWEPlayerCustomizationSet.h"
#include "ESN2PlayerPerspective.h"
#include "OnGameStateReplicatedDelegate.h"
#include "OnPlayerStateReplicatedDelegate.h"
#include "Templates/SubclassOf.h"
#include "SN2PlayerController.generated.h"

class AActor;
class APawn;
class ASN2PlayerCharacter;
class ASN2PlayerState;
class UCommonActivatableWidget;
class UNetDriver;
class USN2BaseScannerInteractionComponent;
class USN2GameStateCommandComponent;
class USN2PlayerCustomizationControllerComponent;
class UUWEAbilitySystemComponent;
class UUWEBaseReplicatorComponent;
class UUWEGameplayMessageRouterComponent;
class UUWEInteractComponent;
class UUWEPingSystemCommandComponent;
class UUWEPlayerCustomizationSetDA;
class UUWESaveCommunicationComponent;
class UUWESonarCommunicationComponent;
class UUWEStoryGoalCommandComponent;
class UUWESubmarinePilotComponent;
class UUWEVideoTourComponent;
class UWorld;

UCLASS()
class SUBNAUTICA2_API ASN2PlayerController : public AUWEGameplayPlayerController, public ILoadingProcessInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPlayerPerspectiveChanged);
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWESaveCommunicationComponent* SaveCommunication;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USN2GameStateCommandComponent* GameStateCommandComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEPingSystemCommandComponent* PingSystemCommandComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEStoryGoalCommandComponent* StoryGoalCommandComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USN2BaseScannerInteractionComponent* BaseScannerInteractionComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWESonarCommunicationComponent* SonarCommunicationComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USN2PlayerCustomizationControllerComponent* PlayerCustomizationComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEVideoTourComponent* VideoTourComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UUWEInteractComponent* InteractComp;
    
    UPROPERTY(BlueprintAssignable)
    FOnPlayerStateReplicated OnPlayerStateSet;
    
    UPROPERTY(BlueprintAssignable)
    FOnGameStateReplicated OnGameStateSet;
    
    UPROPERTY(BlueprintAssignable)
    FOnPlayerPerspectiveChanged OnPlayerPerspectiveChanged;
    
private:
    UPROPERTY(Instanced)
    UUWEGameplayMessageRouterComponent* GameplayMessageRouterComponent;
    
    UPROPERTY(Instanced)
    UUWEBaseReplicatorComponent* BaseReplicatorComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UUWESubmarinePilotComponent* PilotComponent;
    
    UPROPERTY()
    AActor* DebugTarget;
    
    UPROPERTY()
    ESN2PlayerPerspective CurrentPerspective;
    
    UPROPERTY()
    float CameraOffset;
    
    UPROPERTY()
    bool bPlayerStateAcknowledged;
    
    UPROPERTY(Transient)
    bool bInitialPawnRestartDelayed;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    FName ForceFeedbackMultiplierSettingsName;
    
public:
    ASN2PlayerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ToggleThirdPerson();
    
    UFUNCTION(BlueprintCallable)
    void TogglePlayerCharacterVisibility();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ToggleHoverEffect(AActor* Actor, bool bActive);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetDebugTarget(AActor* InDebugTarget);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCheat(const FString& Command);
    
    UFUNCTION(Reliable, Server)
    void ServerAcknowledgePlayerState();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SelectCharacterCustomized(FUWEPlayerCustomizationSet CustomizationSet);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SelectCharacter(const TSoftObjectPtr<UUWEPlayerCustomizationSetDA>& CustomizationSet);
    
    UFUNCTION()
    void OnWidgetPushed(EUWEWindowManagerLayer LayerId, bool IsFirst, TSubclassOf<UCommonActivatableWidget> WidgetClass);
    
    UFUNCTION()
    void OnWidgetPopped(EUWEWindowManagerLayer LayerId, bool IsLast, TSubclassOf<UCommonActivatableWidget> WidgetClass);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnStopWaitingForInitialPawnStart();
    
public:
    UFUNCTION()
    void OnPossessedPawnChangedFunction(APawn* PawnOld, APawn* PawnNew);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnBeginWaitingForInitialPawnStart();
    
private:
    UFUNCTION()
    void OnBaseReplicationComplete();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsNetworkConnected() const;
    
    UFUNCTION(Client, Reliable)
    void InitialPawnRestartReady();
    
    UFUNCTION(Client, Reliable)
    void InitialPawnRestartDelayed();
    
    UFUNCTION()
    void HandleClientNetworkFailure(UWorld* InWorld, UNetDriver* NetDriver, ENetworkFailure::Type FailureType, const FString& ErrorString);
    
    UFUNCTION(BlueprintCallable)
    ASN2PlayerCharacter* GetSN2PlayerCharacter();
    
    UFUNCTION(BlueprintPure)
    ASN2PlayerState* GetPS() const;
    
    UFUNCTION(BlueprintPure)
    UUWEAbilitySystemComponent* GetASC() const;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPushScreenToLayer(TSubclassOf<UCommonActivatableWidget> ActivatableWidgetClass, EUWEWindowManagerLayer Layer);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Cheat(const FString& Command);
    

    // Fix for true pure virtual functions not being implemented
};

