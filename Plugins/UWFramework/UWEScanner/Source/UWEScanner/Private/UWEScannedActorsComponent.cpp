#include "UWEScannedActorsComponent.h"

UUWEScannedActorsComponent::UUWEScannedActorsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SaveHandle = NULL;
    this->ScannedActorsGameStateComponent = NULL;
}

bool UUWEScannedActorsComponent::WillUnlockScanDataExtrasIfHasTag(const AActor* Actor, FGameplayTag ExtraUnlocksTag, UUWEScanData* ScanData) const {
    return false;
}

bool UUWEScannedActorsComponent::WillUnlockScanDataExtras(const AActor* Actor, FGameplayTagContainer& ExtraUnlocks, UUWEScanData* ScanData) const {
    return false;
}

bool UUWEScannedActorsComponent::WillEarnScanDataCompletionProgress(AActor* Actor, UUWEScanData* ScanData) const {
    return false;
}

bool UUWEScannedActorsComponent::TryAddActorIntanceScanProgress(AActor* Actor, float Amount, float PredictedTotalAmount) {
    return false;
}

void UUWEScannedActorsComponent::OnScannedEventFired(FUWEEventKey EventKey, int32 OldValue, int32 NewValue) {
}

void UUWEScannedActorsComponent::OnScanCompletedEventFired(FUWEEventKey EventKey, int32 OldValue, int32 NewValue) {
}

bool UUWEScannedActorsComponent::IsScanDataTagRequirementMet(const UUWEScanData* ScanData) const {
    return false;
}

bool UUWEScannedActorsComponent::IsScanDataProgressComplete(UUWEScanData* ScanData) const {
    return false;
}

bool UUWEScannedActorsComponent::IsScanDataFullyScanned(UUWEScanData* ScanData) const {
    return false;
}

bool UUWEScannedActorsComponent::IsActorValidScanTarget(AActor* Actor, UUWEScanData* ScanData) const {
    return false;
}

bool UUWEScannedActorsComponent::IsActorScannedByPlayer(AActor* Actor) const {
    return false;
}

bool UUWEScannedActorsComponent::HasActorEverBeenScannedByAPlayer(AActor* Actor) const {
    return false;
}

void UUWEScannedActorsComponent::GiveCurrencyPrize(APlayerState* Player, UUWEScanData* ScanData) {
}

void UUWEScannedActorsComponent::GiveConsolationPrize(const APlayerState* Player, UUWEScanData* ScanData) const {
}

TArray<FUWEScanStep> UUWEScannedActorsComponent::GetUnlockedScanDataStepsForActor(const AActor* Actor) const {
    return TArray<FUWEScanStep>();
}

int32 UUWEScannedActorsComponent::GetScanCountTowardsCompletion(UUWEScanData* ScanData) const {
    return 0;
}

float UUWEScannedActorsComponent::GetActorInstanceScannedProgressForPlayer(AActor* Actor) const {
    return 0.0f;
}

void UUWEScannedActorsComponent::ClientNotifyScannedInstanceCompleted_Implementation(AActor* ScannedActor) {
}

bool UUWEScannedActorsComponent::CanActorCurrentlyBeScanned(AActor* Actor, FGameplayTagContainer& ReasonsCanBeScanned, UUWEScanData* ScanData) const {
    return false;
}

bool UUWEScannedActorsComponent::CanActorBeScannedByBaseScanner(AActor* Actor, FGameplayTagContainer& ReasonsCanBeScanned, UUWEScanData* ScanData) const {
    return false;
}


