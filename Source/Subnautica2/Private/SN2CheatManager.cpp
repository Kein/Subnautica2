#include "SN2CheatManager.h"

USN2CheatManager::USN2CheatManager() {
    this->SN2StartingItems = TEXT("Builder,OxygenTankSmall,Knife,Fins,Scanner,Food,Water");
    this->GameplayMessageSubsystem = NULL;
    this->BuildableMaterialStaticPreviewActor = NULL;
    this->BuildableMaterialNanitePreviewActor = NULL;
    this->BuildableMaterialSkelPreviewActor = NULL;
}

void USN2CheatManager::WreckTrident() {
}

void USN2CheatManager::WorldPopRemove(const FString& ResourceName) {
}

void USN2CheatManager::Warp(float X, float Y, float Z) {
}

void USN2CheatManager::VideoToursRunTest(const FString& Filename) {
}

void USN2CheatManager::Unstuck() {
}

void USN2CheatManager::UnpossessAllCreatures() {
}

void USN2CheatManager::UnlockStoryGoal(const FString& TagName) {
}

void USN2CheatManager::UnlockAllRecipes() {
}

void USN2CheatManager::UnlockAllDatabank() {
}

void USN2CheatManager::UnlockAllBioAbilities() {
}

void USN2CheatManager::UnlockAll() {
}

void USN2CheatManager::Unlock(const FString& UnlockableName) {
}

void USN2CheatManager::UnlimitedPower() {
}

void USN2CheatManager::UnlimitedBattery() {
}

void USN2CheatManager::UnfreezeTime() {
}

void USN2CheatManager::Trigger(const FString& TriggerName) {
}

void USN2CheatManager::ToggleTagInternal(const FGameplayTag& Tag, FGameplayTagTarget TargetToToggle) {
}

void USN2CheatManager::ToggleTag(const FString& TagName) {
}

void USN2CheatManager::ToggleSubRandomPilot() {
}

void USN2CheatManager::ToggleSaveBlocking() {
}

void USN2CheatManager::TogglePlayerCharacter() {
}

void USN2CheatManager::ToggleImGuiCursor() {
}

void USN2CheatManager::ToggleGlobalTagInternal(const FGameplayTag& Tag) {
}

void USN2CheatManager::ToggleGlobalTag(const FString& TagName) {
}

void USN2CheatManager::ToggleGameCaptureMode() {
}

void USN2CheatManager::ToggleFreeCam() {
}

void USN2CheatManager::ToggleFog() {
}

void USN2CheatManager::ToggleFlashingLights() {
}

void USN2CheatManager::ToggleDebugUI() {
}

void USN2CheatManager::ToggleCameraAnimations() {
}

void USN2CheatManager::ToggleAutoSave() {
}

void USN2CheatManager::Thirst() {
}

void USN2CheatManager::ThirdPerson() {
}

void USN2CheatManager::TestNotifyLocalPlayer(int32 SeverityLevel) {
}

void USN2CheatManager::SwimSpeed(float NewSpeed) {
}

void USN2CheatManager::surface() {
}

void USN2CheatManager::StoryGoalDebugger(const FString& TagName) {
}

void USN2CheatManager::StopVideoTour() {
}

void USN2CheatManager::StartingItems() {
}

void USN2CheatManager::StartDynamicEvent(const FString& EventName) {
}

void USN2CheatManager::Speed(float NewTimeDilation) {
}

void USN2CheatManager::SpawnCreature(const FString& CreatureNameAndQuantity) {
}

void USN2CheatManager::SpawnAll_SpawnNext() {
}

void USN2CheatManager::SpawnAll() {
}

void USN2CheatManager::Spawn(const FString& ItemNameAndQuantity) {
}

void USN2CheatManager::Slowmode() {
}

void USN2CheatManager::SimulateNetworkReconnect() {
}

void USN2CheatManager::SimulateNetworkDisconnect() {
}

void USN2CheatManager::ShowPDA() {
}

void USN2CheatManager::SetTimeOfDay(const FString& NewTimeString) {
}

void USN2CheatManager::SetStoredPower(float Amount) {
}

void USN2CheatManager::SetSensorWidth(float Width) {
}

void USN2CheatManager::SetSelectedFromHoverTarget() {
}

void USN2CheatManager::SetSelectedFromCurrentPlayer() {
}

void USN2CheatManager::SetProcessorUpdateMultiplier(float ProcessorUpdateMultiplier) {
}

void USN2CheatManager::SetPlayerName(const FString& PlayerName) {
}

void USN2CheatManager::SetOrbitAttached(bool Orbit) {
}

void USN2CheatManager::SetNextWeather(const FString& WeatherName) {
}

void USN2CheatManager::SetInteractionHighlightEnabled(bool Enabled) {
}

void USN2CheatManager::SetFOV(float Angle) {
}

void USN2CheatManager::SetFocusDistance(float Distance) {
}

void USN2CheatManager::SetDayNumber(int32 NewDayNumber) {
}

void USN2CheatManager::SetCurrentWeather(const FString& WeatherName) {
}

void USN2CheatManager::SetAutoSaveDuration(const FString& duration) {
}

void USN2CheatManager::SetApplicationScale(float Scale) {
}

void USN2CheatManager::SetAperture(float Aperture) {
}

void USN2CheatManager::ServerTraceStop() {
}

void USN2CheatManager::ServerTraceSend(const FString& Channels) {
}

void USN2CheatManager::SentryEvent(const FString& Message) {
}

void USN2CheatManager::Sensitivity(float Multiplier) {
}

void USN2CheatManager::ScanAllForPSO() {
}

void USN2CheatManager::ScanAll_ScanNext() {
}

void USN2CheatManager::SaveGame(int32 Index) {
}

void USN2CheatManager::SaveDebugCommandHistory(TArray<FString> ExecutedCommands) {
}

void USN2CheatManager::RunNextMacroCommand() {
}

void USN2CheatManager::RunMacro(const FString& MacroName) {
}

void USN2CheatManager::RepairSubmarine() {
}

void USN2CheatManager::RemoveTagInternal(const FGameplayTag& Tag, FGameplayTagTarget TargetToRemoveFrom) {
}

void USN2CheatManager::RemoveTag(const FString& TagName) {
}

void USN2CheatManager::RemoveGlobalTagInternal(const FGameplayTag& Tag) {
}

void USN2CheatManager::RemoveGlobalTag(const FString& TagName) {
}

void USN2CheatManager::RemoveCueTarget(const FString& TagName) {
}

void USN2CheatManager::RemoveCue(const FString& TagName) {
}

void USN2CheatManager::RemoveAbility(const FString& AbilityName) {
}

void USN2CheatManager::RemediateTarget() {
}

void USN2CheatManager::RecordVideoTour(const FName& Filename) {
}

void USN2CheatManager::PrintTargetActorMemoryFootprint() {
}

void USN2CheatManager::PrintAllWeatherTypes() {
}

void USN2CheatManager::PlayVideoTour(const FString& JsonFilename) {
}

void USN2CheatManager::PlayerStart(const FString& PlayerStartTag) {
}

void USN2CheatManager::Ping() {
}

void USN2CheatManager::Oxygen() {
}

void USN2CheatManager::OverallVolume(float Multiplier) {
}

void USN2CheatManager::OpenSavesFolder() {
}

void USN2CheatManager::ObserverCamera() {
}

void USN2CheatManager::NotifyPlayer(const FString& InfoString, bool PrintLog) const {
}

void USN2CheatManager::NotifyAll(const FString& InfoString) const {
}

void USN2CheatManager::NoCost() {
}

void USN2CheatManager::NoClip() {
}

void USN2CheatManager::Night() {
}

void USN2CheatManager::NewGameOfMode(const FString& GameModeAlias) {
}

void USN2CheatManager::NewGame() {
}

void USN2CheatManager::MyHealth(float Value) {
}

void USN2CheatManager::MuteAudio(bool ShouldMute) {
}

void USN2CheatManager::LockCameraAxis(const FString& Axis) {
}

void USN2CheatManager::LoadGame(const FString& Slot, const FString& Checkpoint) {
}

TArray<FString> USN2CheatManager::LoadDebugCommandHistory() {
    return TArray<FString>();
}

void USN2CheatManager::ListAllObjectUFunctions(const UObject* Object) {
}

void USN2CheatManager::ListAllActors(const FString& Filter) {
}

void USN2CheatManager::KillAllOfClass(const FString& ClassName) {
}

void USN2CheatManager::KillAll() {
}

void USN2CheatManager::Kill() {
}

void USN2CheatManager::KickPlayer(const FString& PlayerName) {
}

void USN2CheatManager::Item(const FString& ItemNameAndQuantity) {
}

bool USN2CheatManager::IsServer() {
    return false;
}

void USN2CheatManager::Invisible() {
}

void USN2CheatManager::Hunger() {
}

void USN2CheatManager::History() {
}

void USN2CheatManager::HideModal() {
}

void USN2CheatManager::HideHud() {
}

void USN2CheatManager::HealTarget(float HealAmount) {
}

void USN2CheatManager::Heal(float HealAmount) {
}

bool USN2CheatManager::HasTag(const FGameplayTag& Tag) const {
    return false;
}

bool USN2CheatManager::HasItemType(UUWEItemType* ItemType) const {
    return false;
}

bool USN2CheatManager::HasGlobalTag(const FGameplayTag& Tag) const {
    return false;
}

void USN2CheatManager::GridScale(float Scale) {
}

void USN2CheatManager::GoToNextWeather() {
}

void USN2CheatManager::GotoBioBed() {
}

void USN2CheatManager::GotoAll_GotoNext() {
}

void USN2CheatManager::GotoAll(float SecondsToWait) {
}

void USN2CheatManager::Goto(const FString& LocationName) {
}

void USN2CheatManager::GiveEffect(const FString& EffectName) {
}

void USN2CheatManager::GiveAllForPinned() {
}

void USN2CheatManager::GiveAbility(const FString& AbilityName) {
}

void USN2CheatManager::Give(const FString& ItemNameAndQuantity) {
}

void USN2CheatManager::GetCoords() {
}

void USN2CheatManager::GetCameraCoords() {
}

void USN2CheatManager::GameCaptureSettings() {
}

void USN2CheatManager::FreezeTime() {
}

void USN2CheatManager::FreeBuild() {
}

void USN2CheatManager::ForwardToServer(EForwardExecPinsEnum& OutputPins) {
}

void USN2CheatManager::ForceQuickProcessExit() {
}

void USN2CheatManager::ForceProcessExit() {
}

void USN2CheatManager::ffe(bool bAffectsLeftLarge, bool bAffectsLeftSmall, bool bAffectsRightLarge, bool bAffectsRightSmall, float Intensity) {
}

void USN2CheatManager::FastSwim() {
}

void USN2CheatManager::FastBuild(float Value) {
}

void USN2CheatManager::ExecuteForAll(const FString& Cmd) {
}

void USN2CheatManager::ExecuteCueTarget(const FString& TagName) {
}

void USN2CheatManager::ExecuteCue(const FString& TagName) {
}

void USN2CheatManager::EquipAll_EquipNext() {
}

void USN2CheatManager::EquipAll() {
}

void USN2CheatManager::Equip(const FString& TagName) {
}

void USN2CheatManager::EnsureClient() {
}

void USN2CheatManager::EnableWeather(const bool bEnabled) {
}

void USN2CheatManager::EditorCameraCoords(const FString& Coordinates) {
}

void USN2CheatManager::DynamicEventDebugger(const FString& TagName) {
}

void USN2CheatManager::DumpAllGotoNames() {
}

void USN2CheatManager::DisplaySaveSlots(const TArray<FUWESlotInfoSimple>& SaveSlots) const {
}

void USN2CheatManager::DisableUGC(bool bDisabled) {
}

void USN2CheatManager::DestroyCreatures(const FString& CreatureName, float Amount) {
}

void USN2CheatManager::DestroyAllActorsOfClass(const FString& ClassName) {
}

void USN2CheatManager::DefloodSubmarine() {
}

void USN2CheatManager::DebugDrawStimulus() {
}

void USN2CheatManager::DayOnly(bool ShouldStopTransition) {
}

void USN2CheatManager::DayNight(float NewTime) {
}

void USN2CheatManager::Day() {
}

void USN2CheatManager::DamageSubmarine(float NewDamage) {
}

void USN2CheatManager::Damage(float DamageAmount) {
}

void USN2CheatManager::CycleSelectedWindowTab() {
}

void USN2CheatManager::CycleAbilitySystemDebug() {
}

void USN2CheatManager::CrashServerWithNullPointerException() {
}

void USN2CheatManager::CrashServer() {
}

void USN2CheatManager::CrashClientWithStackOverflow() {
}

void USN2CheatManager::CrashClientWithNullPointerException() {
}

void USN2CheatManager::CrashClientWithMemoryCorruption() {
}

void USN2CheatManager::CrashClient() {
}

void USN2CheatManager::Coords(const FString& Coordinates) {
}

void USN2CheatManager::ContinueGame() {
}

void USN2CheatManager::CloseDiag() {
}

void USN2CheatManager::ClearScannedActors() {
}

void USN2CheatManager::ClearSaves() {
}

void USN2CheatManager::ClearNotifications() {
}

void USN2CheatManager::ClearLockedCameraAxis() {
}

void USN2CheatManager::ClearFreeCamAttachment() {
}

void USN2CheatManager::ClearDialogue() {
}

void USN2CheatManager::ClearDebugCommandHistory() {
}

void USN2CheatManager::ClearBiomods() {
}

void USN2CheatManager::Clear() {
}

void USN2CheatManager::CinematicsVolume(float Multiplier) {
}

void USN2CheatManager::CameraCoords(const FString& Coordinates) {
}

void USN2CheatManager::BuilderShowPlacementDebug() {
}

void USN2CheatManager::BuildAllForPSO() {
}

void USN2CheatManager::Blind() {
}

void USN2CheatManager::BioBedUnassign() {
}

void USN2CheatManager::BioBedSpawn(int32 BedNumber) {
}

void USN2CheatManager::BioBedAssign(int32 BedNumber) {
}

void USN2CheatManager::BaseToggleSupportCheck() {
}

void USN2CheatManager::BaseToggleSelectionHighlight() {
}

void USN2CheatManager::BaseToggleSelectionDebug() {
}

void USN2CheatManager::BaseToggleFreePlacement() {
}

void USN2CheatManager::BaseToggleCellDebug() {
}

void USN2CheatManager::BaseToggleBuilderTraceDebug() {
}

void USN2CheatManager::BaseShowOverlapVolumes() {
}

void USN2CheatManager::BaseShowInvalidMatches() {
}

void USN2CheatManager::BaseShowDeconstructGroups() {
}

void USN2CheatManager::BaseShowDeconstructCellSelection() {
}

void USN2CheatManager::BaseShowCellRotations(const FString& Mode) {
}

void USN2CheatManager::BaseShowCellBorders(const FString& Mode) {
}

void USN2CheatManager::BaseRegenerateMeshes() {
}

void USN2CheatManager::BaseRefundStructure(int32 BaseIndex, int32 StructureId) {
}

void USN2CheatManager::BasePrintAllStructures() {
}

void USN2CheatManager::BaseLogPlacementOverlaps() {
}

void USN2CheatManager::BaseLogNoWFCMatches() {
}

void USN2CheatManager::BaseForceRecomputeSelection() {
}

void USN2CheatManager::BaseForceRecomputeLegality() {
}

void USN2CheatManager::BaseEnablePieceDebugMesh() {
}

void USN2CheatManager::BaseAllowIllegalBuilds() {
}

void USN2CheatManager::AutoSaveGame() {
}

void USN2CheatManager::Attr(const FString& AttributeName, float AttributeValue) {
}

void USN2CheatManager::AttachFreeCam() {
}

void USN2CheatManager::AttachCamera() {
}

void USN2CheatManager::AIDirectorDebugger(const FString& TagName) {
}

void USN2CheatManager::AddVerticalForce(float Force) {
}

void USN2CheatManager::AddToDebugCommandHistory(const FString& ExecutedCommand) {
}

void USN2CheatManager::AddTagInternal(const FGameplayTag& Tag, FGameplayTagTarget TargetToAddTo) {
}

void USN2CheatManager::AddTag(const FString& TagName) {
}

void USN2CheatManager::AddGlobalTagInternal(const FGameplayTag& Tag) {
}

void USN2CheatManager::AddGlobalTag(const FString& TagName) {
}

void USN2CheatManager::AddCurrency(const FString& Currency, int32 Amount) {
}

void USN2CheatManager::AddCueTarget(const FString& TagName) {
}

void USN2CheatManager::AddCue(const FString& TagName) {
}

void USN2CheatManager::AddBiomod(const FString& BiomodName) {
}


