#include "SN2Statics.h"
#include "Templates/SubclassOf.h"

USN2Statics::USN2Statics() {
}

AActor* USN2Statics::SpawnItemWithImpulse(const UObject* WorldContextObject, UClass* ActorClass, const FTransform& ActorTransform, const FVector& Impulse) {
    return NULL;
}

void USN2Statics::SetHiddenInSeconds(UObject* WorldContextObject, AActor* Actor, float Time, bool bNewHidden) {
}

void USN2Statics::SetActorEnableCollisionInSeconds(UObject* WorldContextObject, AActor* Actor, float Time, bool bNewEnableCollision) {
}

void USN2Statics::RemoveGameplayCue_NonReplicated(AActor* Target, const FGameplayTag GameplayCueTag, const FGameplayCueParameters& Parameters) {
}

bool USN2Statics::PlayerPickupActor(AActor* PlayerCharacter, AActor* Pickupable, const FHitResult& HitResult) {
    return false;
}

void USN2Statics::LogToScreen(const FString& Message, bool LongLasting) {
}

bool USN2Statics::LocalPlayerHasTag(UObject* WorldContextObject, FGameplayTag Tag) {
    return false;
}

void USN2Statics::LeaveMenu() {
}

bool USN2Statics::IsStandalone(UObject* WorldContextObject) {
    return false;
}

bool USN2Statics::IsListenServer(UObject* WorldContextObject) {
    return false;
}

bool USN2Statics::IsDedicatedServer(UObject* WorldContextObject) {
    return false;
}

bool USN2Statics::IsClient(UObject* WorldContextObject) {
    return false;
}

bool USN2Statics::IsActorWeldable(const AActor* Actor) {
    return false;
}

bool USN2Statics::IsActorScannable(AActor* Actor) {
    return false;
}

bool USN2Statics::IsActorPingable(const AActor* Actor) {
    return false;
}

bool USN2Statics::IsActorItemType(const AActor* Actor) {
    return false;
}

bool USN2Statics::IsActorCuttable(const AActor* Actor) {
    return false;
}

bool USN2Statics::IsActorBreakable(const AActor* Actor) {
    return false;
}

UWindowManager* USN2Statics::GetWindowManager(UObject* WorldContextObject) {
    return NULL;
}

float USN2Statics::GetValueFromRuntimeCurve(const FRuntimeFloatCurve Curve, float Time) {
    return 0.0f;
}

FVector USN2Statics::GetValidLocationForDroppedItem(ASN2PlayerCharacter* Player, const AActor* Item) {
    return FVector{};
}

UUWEItemType* USN2Statics::GetTypeDataForSourceObject(const UObject* ContextObject) {
    return NULL;
}

UUWEItemType* USN2Statics::GetTypeDataForActor(const AActor* Actor) {
    return NULL;
}

bool USN2Statics::GetShowOutlinesEnabled(UObject* WorldContextObject) {
    return false;
}

FText USN2Statics::GetServerName(UObject* WorldContextObject) {
    return FText::GetEmpty();
}

UUWEScanData* USN2Statics::GetScanDataForActor(const AActor* Actor) {
    return NULL;
}

UUWEResonatableData* USN2Statics::GetResonatableDataForActor(const AActor* Actor) {
    return NULL;
}

TArray<FString> USN2Statics::GetPlayerNames(UObject* WorldContextObject) {
    return TArray<FString>();
}

ASN2PlayerCharacter* USN2Statics::GetPlayerCharacterFromPlayerState(const ASN2PlayerState* PlayerState) {
    return NULL;
}

UUWEPingData* USN2Statics::GetPingDataForActor(const AActor* Actor) {
    return NULL;
}

bool USN2Statics::GetPickupForceFeedbackEnabled(UObject* WorldContextObject) {
    return false;
}

UUWEToolbarComponent* USN2Statics::GetLocalToolbarComponent(UObject* WorldContextObject) {
    return NULL;
}

UUWESubmarinePilotComponent* USN2Statics::GetLocalSubmarinePilotComponent(UObject* WorldContextObject) {
    return NULL;
}

ASN2PlayerState* USN2Statics::GetLocalPlayerState(UObject* WorldContextObject) {
    return NULL;
}

UUWEInventoryRouterComponent* USN2Statics::GetLocalPlayerInventoryRouter(UObject* WorldContextObject) {
    return NULL;
}

UUWEInventoryComponent* USN2Statics::GetLocalPlayerInventory(UObject* WorldContextObject) {
    return NULL;
}

int32 USN2Statics::GetLocalPlayerID(UObject* WorldContextObject) {
    return 0;
}

ASN2PlayerController* USN2Statics::GetLocalPlayerController(UObject* WorldContextObject) {
    return NULL;
}

ASN2PlayerCharacter* USN2Statics::GetLocalPlayerCharacter(UObject* WorldContextObject) {
    return NULL;
}

USN2LocalPlayer* USN2Statics::GetLocalPlayer(UObject* WorldContextObject) {
    return NULL;
}

APawn* USN2Statics::GetLocalPawn(UObject* WorldContextObject) {
    return NULL;
}

UUWENotificationComponent* USN2Statics::GetLocalNotificationComponent(UObject* WorldContextObject) {
    return NULL;
}

UUWEInventoryRouterComponent* USN2Statics::GetLocalInventoryRouterComponent(UObject* WorldContextObject) {
    return NULL;
}

AUWEBaseItem* USN2Statics::GetLocalEquippedTool(UObject* WorldContextObject) {
    return NULL;
}

UUWEEquipmentComponent* USN2Statics::GetLocalEquipmentComponent(UObject* WorldContextObject) {
    return NULL;
}

UFileMediaSource* USN2Statics::GetLifepodVideoForPlatform(UObject* WorldContextObject) {
    return NULL;
}

bool USN2Statics::GetLargeTextScalingEnabled(UObject* WorldContextObject) {
    return false;
}

FKey USN2Statics::GetInvalidKeyInBlueprint() {
    return FKey{};
}

FKey USN2Statics::GetInvalidGamepadKeyInBlueprint() {
    return FKey{};
}

FTransform USN2Statics::GetInteractTransform(AActor* Actor) {
    return FTransform{};
}

FUWETargetActor USN2Statics::GetHoverTarget(UObject* WorldContextObject, float MaxDistance) {
    return FUWETargetActor{};
}

ASN2GameState* USN2Statics::GetGameState(const UObject* WorldContextObject) {
    return NULL;
}

UUWEGameConfigComponent* USN2Statics::GetGameConfig(const UObject* WorldContextObject) {
    return NULL;
}

bool USN2Statics::GetFeatureFlag(const FString& Feature) {
    return false;
}

float USN2Statics::GetDateTimeAlpha(FDateTime StartDateTime, FDateTime TargetDateTime, FDateTime CurrentDateTime) {
    return 0.0f;
}

UUWECuttableData* USN2Statics::GetCuttableDataForActor(const AActor* Actor) {
    return NULL;
}

UActorComponent* USN2Statics::GetComponentFromReference(AActor* Owner, FComponentReference Reference) {
    return NULL;
}

UUWEBreakableData* USN2Statics::GetBreakableDataForActor(const AActor* Actor) {
    return NULL;
}

bool USN2Statics::GetAnalyticsEnabled(UObject* WorldContextObject) {
    return false;
}

FString USN2Statics::GetActorTypeLink(AActor* Actor) {
    return TEXT("");
}

FQuat USN2Statics::GetActorQuat(AActor* Actor) {
    return FQuat{};
}

FGameplayTag USN2Statics::GameplayTagFromString(const FString& String) {
    return FGameplayTag{};
}

void USN2Statics::ForcePhysicsTransformUpdate(AActor* Actor) {
}

APlayerController* USN2Statics::FindLocalPlayerControllerFromActor(AActor* Actor) {
    return NULL;
}

UUWEInventoryComponent* USN2Statics::FindInventoryFromActor(AActor* Actor) {
    return NULL;
}

TArray<FString> USN2Statics::ExtractComputerTextInterfaceProgressBarTags(const FString& InText) {
    return TArray<FString>();
}

void USN2Statics::ExitProcess() {
}

void USN2Statics::ExecuteGameplayCue_NonReplicated(AActor* Target, const FGameplayTag GameplayCueTag, const FGameplayCueParameters& Parameters) {
}

void USN2Statics::EnterMenu() {
}

void USN2Statics::CrashProcessWithStackOverflow() {
}

void USN2Statics::CrashProcessWithNullPointerException() {
}

void USN2Statics::CrashProcessWithMemoryCorruption() {
}

void USN2Statics::CrashProcess() {
}

void USN2Statics::CopySplineSetup(USplineComponent* SplineComponentSource, USplineComponent* SplineComponentDestination) {
}

FString USN2Statics::ConsoleCommand(UObject* WorldContextObject, const FString& Cmd) {
    return TEXT("");
}

void USN2Statics::ClearAllNotifications(UObject* WorldContextObject) {
}

bool USN2Statics::CanPlayerPickupActor(AActor* PlayerCharacter, AActor* Pickupable, const FHitResult& HitResult, FGameplayTag& Reason) {
    return false;
}

void USN2Statics::ApplyDamageType(TSubclassOf<UGameplayEffect> GameplayEffectClass, float Damage, FGameplayTag DamageType, AActor* EffectCauser, FHitResult HitResult) const {
}

void USN2Statics::AddOptionToOptionsString(FString& Options, const FString& Key, const FString& Value) {
}

void USN2Statics::AddImpulseToItem(AUWEBaseItem* Item, const FVector& Impulse) {
}

void USN2Statics::AddImpulseToActor(AActor* Actor, const FVector& Impulse) {
}

void USN2Statics::AddGameplayCue_NonReplicated(AActor* Target, const FGameplayTag GameplayCueTag, const FGameplayCueParameters& Parameters) {
}

void USN2Statics::AddExternalVelocityToActor(AActor* Actor, FVector Velocity, float MaxActorVolume, bool ScaleWithMaxActorVolume) {
}

void USN2Statics::AddExternalInfluenceToActor(AActor* Actor, EUWEMovementComponentInfluenceType InfluenceType, const FVector& Value) {
}


