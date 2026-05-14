#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/TimerHandle.h"
#include "GameFramework/OnlineReplStructs.h"
#include "AbilitySystemInterface.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "UWEHoverTargetInterface.h"
#include "UWETargetActor.h"
#include "UWEEventRecorder.h"
#include "UWEGameplayPlayerState.h"
#include "UWENetworkDiagnosticsInfoProvider.h"
#include "UWEPlayerCustomizationSet.h"
#include "OnPlayerNameChangedDelegate.h"
#include "UWEClientSessionInfo.h"
#include "SN2PlayerState.generated.h"

class AActor;
class ASN2GameplayAbilityTargetActor_HoverTarget;
class ASN2PlayerController;
class USN2AdaptationsPlayerStateComponent;
class USN2BuilderToolComponent;
class USN2ComputerCoreTrackerComponent;
class USN2DebugCommandComponent;
class USN2PlayerUpgradesPlayerStateComponent;
class USN2RadioComponent;
class USN2TeamMemberViewModel;
class USN2UnlockPlayerStateComponent;
class UUWEAIDirectorPlayerStateComponent;
class UUWEAbilitySystemComponent;
class UUWEDialoguePDASpeakerComponent;
class UUWEEventRecorderComponent;
class UUWEEventTrackerComponent;
class UUWEGameCaptureComponent;
class UUWEInGameCurrencyPlayerStateComponent;
class UUWENotificationComponent;
class UUWEPDAVOPlaybackPlayerStateComponent;
class UUWEPingPlayerStateComponent;
class UUWEPinnedRecipesPlayerStateComponent;
class UUWEPlayerCustomizationSetDA;
class UUWESaveComponent;
class UUWEScannedActorsComponent;
class UUWESonarPlayerStateComponent;
class UUWEStoryGoalContainerComponent;
class UUWEStoryGoalPollingPlayerStateComponent;
class UUWETriggeredNotificationsComponent;

UCLASS()
class SUBNAUTICA2_API ASN2PlayerState : public AUWEGameplayPlayerState, public IAbilitySystemInterface, public IUWEHoverTargetInterface, public IUWEEventRecorder, public IUWENetworkDiagnosticsInfoProvider {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSelectedTargetChanged, const AActor*, OldTarget, const AActor*, NewTarget);
    
    UPROPERTY(BlueprintAssignable)
    FSelectedTargetChanged OnSelectedTargetChanged;
    
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleAnywhere)
    AActor* SelectedTarget;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UUWESaveComponent* SaveComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEDialoguePDASpeakerComponent* DialoguePDASpeakerComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEPDAVOPlaybackPlayerStateComponent* DialoguePlaybackComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEStoryGoalContainerComponent* StoryGoalContainerComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USN2BuilderToolComponent* BuilderToolComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USN2ComputerCoreTrackerComponent* ComputerCoreTrackerComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWENotificationComponent* NotificationComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USN2DebugCommandComponent* DebugCommandComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEScannedActorsComponent* ScannedActorsComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWESonarPlayerStateComponent* SonarComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEGameCaptureComponent* GameCaptureComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USN2UnlockPlayerStateComponent* UnlockPlayerStateComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UUWETriggeredNotificationsComponent* TriggeredNotificationsComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USN2RadioComponent* RadioComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USN2AdaptationsPlayerStateComponent* AdaptationsComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USN2PlayerUpgradesPlayerStateComponent* PlayerUpgradesComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEPinnedRecipesPlayerStateComponent* PinnedRecipesComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEStoryGoalPollingPlayerStateComponent* StoryGoalPollingComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEPingPlayerStateComponent* PingPlayerStateComponent;
    
    UPROPERTY(BlueprintAssignable)
    FOnPlayerNameChanged OnPlayerNameChanged;
    
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleAnywhere)
    FUWETargetActor HoverTarget;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEEventRecorderComponent* EventRecorderComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEEventTrackerComponent* EventTrackerComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString ClientSessionId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Replicated)
    FUWEClientSessionInfo ClientSessionInfo;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, ReplicatedUsing=OnRep_CustomizationSet)
    FUWEPlayerCustomizationSet CustomizationSet;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UUWEPlayerCustomizationSetDA> DefaultCustomizationSet;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEInGameCurrencyPlayerStateComponent* InGameCurrencyComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEAIDirectorPlayerStateComponent* AIDirectorComponent;
    
    UPROPERTY()
    float SessionTimeActiveSeconds;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    FUniqueNetIdRepl PlatformUniqueNetId;
    
protected:
    UPROPERTY(BlueprintReadOnly, Replicated, SaveGame, VisibleAnywhere)
    FGameplayTagContainer ScannedActorTags;
    
private:
    UPROPERTY()
    ASN2GameplayAbilityTargetActor_HoverTarget* GATAHoverTarget;
    
    UPROPERTY()
    FTimerHandle PlayerStatusTimerHandle;
    
    UPROPERTY()
    FVector LastPlayerLocation;
    
    UPROPERTY()
    bool bWasApplicationForeground;
    
    UPROPERTY()
    bool bWasAFK;
    
    UPROPERTY()
    float StatusEventIntervalSeconds;
    
    UPROPERTY()
    FGameplayTag AnalyticsEventTrackerVerb;
    
public:
    ASN2PlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(Reliable, Server)
    void SetClientSessionInfo(FUWEClientSessionInfo InClientSessionInfo);
    
private:
    UFUNCTION()
    void SendPlayerStatusEvent();
    
public:
    UFUNCTION()
    void OnRep_CustomizationSet();
    
private:
    UFUNCTION()
    void InitAnalytics();
    
public:
    UFUNCTION(BlueprintPure)
    USN2TeamMemberViewModel* GetTeamMemberViewModel() const;
    
    UFUNCTION(BlueprintPure)
    ASN2PlayerController* GetPC() const;
    
    UFUNCTION()
    ASN2GameplayAbilityTargetActor_HoverTarget* GetGATAHoverTarget();
    
    UFUNCTION(BlueprintPure)
    FUWEPlayerCustomizationSet GetCustomizationSet() const;
    
    UFUNCTION(BlueprintPure)
    UUWEAbilitySystemComponent* GetASC() const;
    

    virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override { return NULL; }
};

