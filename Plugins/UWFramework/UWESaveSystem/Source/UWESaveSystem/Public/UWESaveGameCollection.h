#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "EUWESaveGameValidity.h"
#include "UWESaveBlob.h"
#include "UWESaveGameCollectionInfo.h"
#include "UWESaveGameCollection.generated.h"

UCLASS(BlueprintType)
class UWESAVESYSTEM_API UUWESaveGameCollection : public USaveGame {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(SaveGame)
    FUWESaveGameCollectionInfo ContainerInfo;
    
    UPROPERTY(SaveGame)
    TArray<FUWESaveBlob> SerializedSaveGames;
    
public:
    UUWESaveGameCollection();

    UFUNCTION(BlueprintPure)
    static EUWESaveGameValidity GetValidityFromVersion(const int32 Version);
    
    UFUNCTION(BlueprintPure)
    static int32 GetMinSupportedVersion();
    
    UFUNCTION(BlueprintPure)
    static int32 GetLatestVersion();
    
};

