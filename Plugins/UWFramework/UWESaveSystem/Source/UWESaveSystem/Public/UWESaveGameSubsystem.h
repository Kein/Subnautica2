#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UWEAwaitingSaveGameCollectionInfoRefresh.h"
#include "UWESaveGameCollectionInfo.h"
#include "UWESaveGameContext.h"
#include "UWESaveSlotMetaData.h"
#include "UWESaveGameSubsystem.generated.h"

class AActor;

UCLASS(BlueprintType)
class UWESAVESYSTEM_API UUWESaveGameSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<FUWESaveGameCollectionInfo> SaveGameInfoCache;
    
    UPROPERTY()
    FUWESaveGameContext SaveContext;
    
    UPROPERTY()
    FUWEAwaitingSaveGameCollectionInfoRefresh AwaitingSaveInfoRefresh;
    
    UPROPERTY(Transient)
    TMap<AActor*, FGuid> PendingGuids;
    
public:
    UUWESaveGameSubsystem();

    UFUNCTION(BlueprintPure)
    bool IsCurrentSaveDirty() const;
    
    UFUNCTION(BlueprintCallable)
    static bool GetSaveInfoForSlot(const FString& SlotName, FUWESaveSlotMetaData& OutSaveGameInfo);
    
    UFUNCTION(BlueprintCallable)
    static FDateTime GetLastSaveToDiscTimeStamp();
    
    UFUNCTION(BlueprintPure)
    FString GetLastModifiedSaveForLevel(const FString& LevelName) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FUWESaveGameCollectionInfo> GetAllSaveInfoForLevel(const FString& LevelName) const;
    
};

