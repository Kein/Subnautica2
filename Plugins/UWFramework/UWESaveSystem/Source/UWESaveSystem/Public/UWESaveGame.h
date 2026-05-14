#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/SaveGame.h"
#include "EUWESaveGameValidity.h"
#include "UWEPlayerMetaData.h"
#include "UWESaveBuffer.h"
#include "UWESaveRecord.h"
#include "UWESaveSlotMetaData.h"
#include "UWESaveGame.generated.h"

UCLASS(BlueprintType)
class UWESAVESYSTEM_API UUWESaveGame : public USaveGame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(SaveGame)
    FUWESaveSlotMetaData MetaData;
    
    UPROPERTY(SaveGame)
    int32 UserIndex;
    
    UPROPERTY(SaveGame)
    TMap<FGuid, FUWESaveBuffer> SaveData;
    
    UPROPERTY(SaveGame)
    TArray<FUWESaveRecord> Records;
    
    UPROPERTY(SaveGame)
    TArray<FUWEPlayerMetaData> PlayerMetaData;
    
public:
    UUWESaveGame();

    UFUNCTION(BlueprintCallable)
    void SetIsMultiplayer(bool IsMultiplayer);
    
    UFUNCTION(BlueprintPure)
    static EUWESaveGameValidity GetValidityFromVersion(const int32 Version);
    
    UFUNCTION(BlueprintCallable)
    static FDateTime GetTimeStamp();
    
    UFUNCTION(BlueprintPure)
    FString GetSlotName() const;
    
    UFUNCTION(BlueprintPure)
    static int32 GetMinSupportedVersion();
    
    UFUNCTION(BlueprintPure)
    static int32 GetLatestVersion();
    
    UFUNCTION(BlueprintPure)
    bool GetIsMultiplayer() const;
    
};

