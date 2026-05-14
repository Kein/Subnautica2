#include "UWEGameModeTypeStatics.h"
#include "Templates/SubclassOf.h"

UUWEGameModeTypeStatics::UUWEGameModeTypeStatics() {
}

EGameModeAliasAsEnum UUWEGameModeTypeStatics::GetGameModeTypeFromAlias(const FString& GameModeAlias) {
    return EGameModeAliasAsEnum::None;
}

EGameModeAliasAsEnum UUWEGameModeTypeStatics::GetGameModeType(const UObject* WorldContextObject) {
    return EGameModeAliasAsEnum::None;
}

FString UUWEGameModeTypeStatics::GetGameModeAliasFromGameModeClass(TSubclassOf<AGameModeBase> GameModeClass) {
    return TEXT("");
}

FString UUWEGameModeTypeStatics::GetGameModeAliasFromAlias(const FString& GameModeAlias) {
    return TEXT("");
}

FString UUWEGameModeTypeStatics::GetClassPathAliasFromGameModeClass(TSubclassOf<AGameModeBase> GameModeClass) {
    return TEXT("");
}

FString UUWEGameModeTypeStatics::GetClassPathAliasFromGameModeAlias(const FString& GameModeAlias) {
    return TEXT("");
}

TArray<FString> UUWEGameModeTypeStatics::GetAllGameModeAliases() {
    return TArray<FString>();
}


