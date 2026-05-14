#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EUWESaveGameValidity.h"
#include "UWESaveGameCustomInfo.h"
#include "UWESaveGameThumbnail.h"
#include "UWESaveHandleUpgraderList.h"
#include "UWESaveSlotMetaData.generated.h"

USTRUCT(BlueprintType)
struct UWESAVESYSTEM_API FUWESaveSlotMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    int32 Version;
    
    UPROPERTY(SaveGame)
    int32 BuildNumber;
    
    UPROPERTY(SaveGame)
    int64 SaveGameSize;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    FGuid SaveId;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    bool IsMultiplayerSave;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    FString SlotName;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    FString LevelName;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    FString GameMode;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    FDateTime CreatedAt;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    FDateTime LastModified;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    FDateTime LastLoaded;
    
    UPROPERTY(SaveGame)
    FUWESaveGameThumbnail Thumbnail;
    
    UPROPERTY(SaveGame)
    FUWESaveHandleUpgraderList UpgraderList;
    
    UPROPERTY(SaveGame)
    FUWESaveGameCustomInfo SaveGameCustomInfo;
    
    UPROPERTY(SaveGame)
    FString BuildBranch;
    
    UPROPERTY(SaveGame)
    bool bWasMultiplayerSave;
    
    UPROPERTY(SaveGame)
    bool bWasImported;
    
    UPROPERTY(Transient)
    EUWESaveGameValidity Validity;
    
    FUWESaveSlotMetaData();
};

