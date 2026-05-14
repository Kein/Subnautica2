#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EUWESaveGameNetMode.h"
#include "EUWESaveGameValidity.h"
#include "UWESaveHandleUpgraderList.h"
#include "UWESaveSlotMetaData.h"
#include "UWESaveGameCollectionInfo.generated.h"

USTRUCT(BlueprintType)
struct UWESAVESYSTEM_API FUWESaveGameCollectionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    int32 Version;
    
    UPROPERTY(SaveGame)
    FGuid SaveId;
    
    UPROPERTY(SaveGame)
    FString SlotName;
    
    UPROPERTY(SaveGame)
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    FString LevelName;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    FString GameMode;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    FDateTime CreatedAt;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    FDateTime LastModified;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    bool bIsMultiplayerSave;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    bool bWasMultiplayerSave;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    bool bWasImported;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    EUWESaveGameNetMode NetMode;
    
    UPROPERTY(SaveGame)
    int32 SavesCount;
    
    UPROPERTY(SaveGame)
    int32 BuildNumber;
    
    UPROPERTY(SaveGame)
    FString BuildBranch;
    
    UPROPERTY(SaveGame)
    FUWESaveHandleUpgraderList UpgraderList;
    
    UPROPERTY(Transient)
    EUWESaveGameValidity Validity;
    
    UPROPERTY(Transient)
    TArray<FUWESaveSlotMetaData> CheckpointMetaData;
    
    FUWESaveGameCollectionInfo();
};

