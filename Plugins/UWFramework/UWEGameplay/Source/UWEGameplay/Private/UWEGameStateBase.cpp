#include "UWEGameStateBase.h"
#include "Net/UnrealNetwork.h"
#include "UWEGameTimeCustomSaveInfo.h"

AUWEGameStateBase::AUWEGameStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SaveHandle = NULL;
    this->GameTimeCustomSaveInfo = CreateDefaultSubobject<UUWEGameTimeCustomSaveInfo>(TEXT("GameTimeInfo"));
    this->bPlayerTransformsLocked = false;
}

void AUWEGameStateBase::SetPlayerTransformsLocked(bool bLocked) {
}

void AUWEGameStateBase::RemoveGlobalTag(const FGameplayTag Tag) {
}

void AUWEGameStateBase::PlayerStartCompletedHandler_Implementation(int32 PlayerId) {
}

void AUWEGameStateBase::OverwritePlayerTransforms(const FTransform& Transform) {
}

void AUWEGameStateBase::OnRep_GlobalGameplayTags(FGameplayTagContainer& OldGlobalGameplayTags) {
}

FGameplayTagContainer AUWEGameStateBase::GetGlobalTags() const {
    return FGameplayTagContainer{};
}

EGameModeAliasAsEnum AUWEGameStateBase::GetGameModeType() const {
    return EGameModeAliasAsEnum::None;
}

FString AUWEGameStateBase::GetGameModeAlias() const {
    return TEXT("");
}



void AUWEGameStateBase::AddGlobalTag(const FGameplayTag Tag) {
}

void AUWEGameStateBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AUWEGameStateBase, GlobalGameplayTags);
    DOREPLIFETIME(AUWEGameStateBase, CurrentGameModeAlias);
}


