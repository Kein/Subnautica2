#pragma once
#include "CoreMinimal.h"
#include "Engine/TimerHandle.h"
#include "GameplayTagContainer.h"
#include "GameplayMessageListenerHandle.h"
#include "UWESlotInfoSimple.h"
#include "EForwardExecPinsEnum.h"
#include "FGameplayTagTarget.h"
#include "SN2BaseCheatManager.h"
#include "SN2CheatManager.generated.h"

class AActor;
class ASkeletalMeshActor;
class AStaticMeshActor;
class UMaterialInterface;
class UModalActivatableWidget;
class UObject;
class USkeletalMesh;
class UStaticMesh;
class UUWEGameplayMessageSubsystem;
class UUWEItemType;

UCLASS(Config=Game)
class SUBNAUTICA2_API USN2CheatManager : public USN2BaseCheatManager {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    FString SN2StartingItems;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<UModalActivatableWidget> CheatListScreenClass;
    
private:
    UPROPERTY()
    UUWEGameplayMessageSubsystem* GameplayMessageSubsystem;
    
    UPROPERTY()
    FGameplayTag TagExecuteCheatGameplayMessage;
    
    UPROPERTY()
    FGameplayTag TagNotifyGameplayMessage;
    
    UPROPERTY()
    FGameplayMessageListenerHandle ListenerHandle;
    
    UPROPERTY()
    TArray<UUWEItemType*> EquipAll_ItemTypesToEquipQueue;
    
    UPROPERTY()
    TArray<UUWEItemType*> SpawnAll_ItemTypesToSpawnQueue;
    
    UPROPERTY()
    TArray<FString> GotoAll_GotoLocationsQueue;
    
    UPROPERTY()
    TArray<AActor*> ScanAll_ActorQueue;
    
    UPROPERTY()
    FTimerHandle EquipAllTimer;
    
    UPROPERTY()
    FTimerHandle SpawnAllTimer;
    
    UPROPERTY()
    FTimerHandle GotoAllTimer;
    
    UPROPERTY()
    FTimerHandle ScanAllTimer;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<USkeletalMesh> BuildablePSOSkeletalPreviewMesh;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UStaticMesh> BuildablePSONanitePreviewMesh;
    
    UPROPERTY()
    TArray<UMaterialInterface*> BuildableMeshMaterials;
    
    UPROPERTY()
    AStaticMeshActor* BuildableMaterialStaticPreviewActor;
    
    UPROPERTY()
    AStaticMeshActor* BuildableMaterialNanitePreviewActor;
    
    UPROPERTY()
    ASkeletalMeshActor* BuildableMaterialSkelPreviewActor;
    
public:
    USN2CheatManager();

    UFUNCTION(BlueprintCallable, Exec)
    void WreckTrident();
    
    UFUNCTION(BlueprintCallable, Exec)
    void WorldPopRemove(const FString& ResourceName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Warp(float X, float Y, float Z);
    
    UFUNCTION(BlueprintCallable, Exec)
    void VideoToursRunTest(const FString& Filename);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Unstuck();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnpossessAllCreatures();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockStoryGoal(const FString& TagName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllRecipes();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllDatabank();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllBioAbilities();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Unlock(const FString& UnlockableName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlimitedPower();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlimitedBattery();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnfreezeTime();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Trigger(const FString& TriggerName);
    
private:
    UFUNCTION()
    void ToggleTagInternal(const FGameplayTag& Tag, FGameplayTagTarget TargetToToggle);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleTag(const FString& TagName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleSubRandomPilot();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleSaveBlocking();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TogglePlayerCharacter();
    
    UFUNCTION(Exec)
    void ToggleImGuiCursor();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ToggleGlobalTagInternal(const FGameplayTag& Tag);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleGlobalTag(const FString& TagName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleGameCaptureMode();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleFreeCam();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleFog();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleFlashingLights();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDebugUI();
    
    UFUNCTION(Exec)
    void ToggleCameraAnimations();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleAutoSave();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Thirst();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ThirdPerson();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestNotifyLocalPlayer(int32 SeverityLevel);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SwimSpeed(float NewSpeed);
    
    UFUNCTION(BlueprintCallable, Exec)
    void surface();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StoryGoalDebugger(const FString& TagName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void StopVideoTour();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartingItems();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartDynamicEvent(const FString& EventName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Speed(float NewTimeDilation);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnCreature(const FString& CreatureNameAndQuantity);
    
private:
    UFUNCTION()
    void SpawnAll_SpawnNext();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Spawn(const FString& ItemNameAndQuantity);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Slowmode();
    
    UFUNCTION(Exec)
    void SimulateNetworkReconnect();
    
    UFUNCTION(Exec)
    void SimulateNetworkDisconnect();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowPDA();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetTimeOfDay(const FString& NewTimeString);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetStoredPower(float Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetSensorWidth(float Width);
    
    UFUNCTION(Exec)
    void SetSelectedFromHoverTarget();
    
    UFUNCTION(Exec)
    void SetSelectedFromCurrentPlayer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetProcessorUpdateMultiplier(float ProcessorUpdateMultiplier);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPlayerName(const FString& PlayerName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetOrbitAttached(bool Orbit);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetNextWeather(const FString& WeatherName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetInteractionHighlightEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetFOV(float Angle);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetFocusDistance(float Distance);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetDayNumber(int32 NewDayNumber);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCurrentWeather(const FString& WeatherName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAutoSaveDuration(const FString& duration);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetApplicationScale(float Scale);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAperture(float Aperture);
    
    UFUNCTION(Exec)
    void ServerTraceStop();
    
    UFUNCTION(Exec)
    void ServerTraceSend(const FString& Channels);
    
    UFUNCTION(Exec)
    void SentryEvent(const FString& Message);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Sensitivity(float Multiplier);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ScanAllForPSO();
    
private:
    UFUNCTION()
    void ScanAll_ScanNext();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void SaveGame(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SaveDebugCommandHistory(TArray<FString> ExecutedCommands);
    
private:
    UFUNCTION()
    void RunNextMacroCommand();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void RunMacro(const FString& MacroName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RepairSubmarine();
    
private:
    UFUNCTION()
    void RemoveTagInternal(const FGameplayTag& Tag, FGameplayTagTarget TargetToRemoveFrom);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveTag(const FString& TagName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveGlobalTagInternal(const FGameplayTag& Tag);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveGlobalTag(const FString& TagName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveCueTarget(const FString& TagName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveCue(const FString& TagName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveAbility(const FString& AbilityName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemediateTarget();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RecordVideoTour(const FName& Filename);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintTargetActorMemoryFootprint();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintAllWeatherTypes();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlayVideoTour(const FString& JsonFilename);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlayerStart(const FString& PlayerStartTag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Ping();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Oxygen();
    
    UFUNCTION(BlueprintCallable, Exec)
    void OverallVolume(float Multiplier);
    
    UFUNCTION(BlueprintCallable, Exec)
    void OpenSavesFolder();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ObserverCamera();
    
private:
    UFUNCTION()
    void NotifyPlayer(const FString& InfoString, bool PrintLog) const;
    
    UFUNCTION()
    void NotifyAll(const FString& InfoString) const;
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void NoCost();
    
    UFUNCTION(BlueprintCallable, Exec)
    void NoClip();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Night();
    
    UFUNCTION(BlueprintCallable, Exec)
    void NewGameOfMode(const FString& GameModeAlias);
    
    UFUNCTION(BlueprintCallable, Exec)
    void NewGame();
    
    UFUNCTION(BlueprintAuthorityOnly, Exec)
    void MyHealth(float Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MuteAudio(bool ShouldMute);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LockCameraAxis(const FString& Axis);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LoadGame(const FString& Slot, const FString& Checkpoint);
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> LoadDebugCommandHistory();
    
    UFUNCTION(BlueprintCallable)
    void ListAllObjectUFunctions(const UObject* Object);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ListAllActors(const FString& Filter);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KillAllOfClass(const FString& ClassName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KillAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Kill();
    
    UFUNCTION(BlueprintCallable, Exec)
    void KickPlayer(const FString& PlayerName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Item(const FString& ItemNameAndQuantity);
    
    UFUNCTION(BlueprintPure)
    bool IsServer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Invisible();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Hunger();
    
    UFUNCTION(Exec)
    void History();
    
    UFUNCTION(BlueprintCallable, Exec)
    void HideModal();
    
    UFUNCTION(BlueprintCallable, Exec)
    void HideHud();
    
    UFUNCTION(BlueprintAuthorityOnly, Exec)
    void HealTarget(float HealAmount);
    
    UFUNCTION(BlueprintAuthorityOnly, Exec)
    void Heal(float HealAmount);
    
protected:
    UFUNCTION(BlueprintPure)
    bool HasTag(const FGameplayTag& Tag) const;
    
public:
    UFUNCTION(BlueprintPure)
    bool HasItemType(UUWEItemType* ItemType) const;
    
protected:
    UFUNCTION(BlueprintPure)
    bool HasGlobalTag(const FGameplayTag& Tag) const;
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void GridScale(float Scale);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GoToNextWeather();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GotoBioBed();
    
private:
    UFUNCTION()
    void GotoAll_GotoNext();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void GotoAll(float SecondsToWait);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Goto(const FString& LocationName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveEffect(const FString& EffectName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveAllForPinned();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveAbility(const FString& AbilityName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Give(const FString& ItemNameAndQuantity);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetCoords();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetCameraCoords();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GameCaptureSettings();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FreezeTime();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FreeBuild();
    
    UFUNCTION(BlueprintCallable)
    void ForwardToServer(EForwardExecPinsEnum& OutputPins);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceQuickProcessExit();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceProcessExit();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ffe(bool bAffectsLeftLarge, bool bAffectsLeftSmall, bool bAffectsRightLarge, bool bAffectsRightSmall, float Intensity);
    
    UFUNCTION(BlueprintCallable, Exec)
    void FastSwim();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FastBuild(float Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ExecuteForAll(const FString& Cmd);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ExecuteCueTarget(const FString& TagName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ExecuteCue(const FString& TagName);
    
private:
    UFUNCTION()
    void EquipAll_EquipNext();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void EquipAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Equip(const FString& TagName);
    
    UFUNCTION(Exec)
    void EnsureClient();
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnableWeather(const bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EditorCameraCoords(const FString& Coordinates);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DynamicEventDebugger(const FString& TagName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpAllGotoNames();
    
private:
    UFUNCTION()
    void DisplaySaveSlots(const TArray<FUWESlotInfoSimple>& SaveSlots) const;
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void DisableUGC(bool bDisabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DestroyCreatures(const FString& CreatureName, float Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DestroyAllActorsOfClass(const FString& ClassName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DefloodSubmarine();
    
    UFUNCTION(Exec)
    void DebugDrawStimulus();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DayOnly(bool ShouldStopTransition);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DayNight(float NewTime);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Day();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DamageSubmarine(float NewDamage);
    
    UFUNCTION(BlueprintAuthorityOnly, Exec)
    void Damage(float DamageAmount);
    
    UFUNCTION(Exec)
    void CycleSelectedWindowTab();
    
    UFUNCTION(Exec)
    void CycleAbilitySystemDebug();
    
    UFUNCTION(Exec)
    void CrashServerWithNullPointerException();
    
    UFUNCTION(Exec)
    void CrashServer();
    
    UFUNCTION(Exec)
    void CrashClientWithStackOverflow();
    
    UFUNCTION(Exec)
    void CrashClientWithNullPointerException();
    
    UFUNCTION(Exec)
    void CrashClientWithMemoryCorruption();
    
    UFUNCTION(Exec)
    void CrashClient();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Coords(const FString& Coordinates);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ContinueGame();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CloseDiag();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearScannedActors();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearSaves();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearNotifications();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearLockedCameraAxis();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearFreeCamAttachment();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearDialogue();
    
    UFUNCTION(BlueprintCallable)
    void ClearDebugCommandHistory();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearBiomods();
    
    UFUNCTION(Exec)
    void Clear();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CinematicsVolume(float Multiplier);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CameraCoords(const FString& Coordinates);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BuilderShowPlacementDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BuildAllForPSO();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Blind();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BioBedUnassign();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BioBedSpawn(int32 BedNumber);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BioBedAssign(int32 BedNumber);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BaseToggleSupportCheck();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BaseToggleSelectionHighlight();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BaseToggleSelectionDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BaseToggleFreePlacement();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BaseToggleCellDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BaseToggleBuilderTraceDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BaseShowOverlapVolumes();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BaseShowInvalidMatches();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BaseShowDeconstructGroups();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BaseShowDeconstructCellSelection();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BaseShowCellRotations(const FString& Mode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BaseShowCellBorders(const FString& Mode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BaseRegenerateMeshes();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BaseRefundStructure(int32 BaseIndex, int32 StructureId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BasePrintAllStructures();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BaseLogPlacementOverlaps();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BaseLogNoWFCMatches();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BaseForceRecomputeSelection();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BaseForceRecomputeLegality();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BaseEnablePieceDebugMesh();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BaseAllowIllegalBuilds();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AutoSaveGame();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Attr(const FString& AttributeName, float AttributeValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AttachFreeCam();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AttachCamera();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AIDirectorDebugger(const FString& TagName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddVerticalForce(float Force);
    
    UFUNCTION(BlueprintCallable)
    void AddToDebugCommandHistory(const FString& ExecutedCommand);
    
private:
    UFUNCTION()
    void AddTagInternal(const FGameplayTag& Tag, FGameplayTagTarget TargetToAddTo);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void AddTag(const FString& TagName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddGlobalTagInternal(const FGameplayTag& Tag);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void AddGlobalTag(const FString& TagName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddCurrency(const FString& Currency, int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddCueTarget(const FString& TagName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddCue(const FString& TagName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddBiomod(const FString& BiomodName);
    
};

