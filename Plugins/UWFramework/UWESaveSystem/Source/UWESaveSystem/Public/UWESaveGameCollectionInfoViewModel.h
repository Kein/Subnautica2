#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "MVVMViewModelBase.h"
#include "EUWESaveGameCollectionIndex.h"
#include "EUWESaveGameValidity.h"
#include "SaveGameSetDisplayNameFinishedDelegateDelegate.h"
#include "UWESaveGameCollectionInfo.h"
#include "UWESaveGameCollectionInfoViewModel.generated.h"

class UUWESaveGameInfoViewModel;

UCLASS()
class UWESAVESYSTEM_API UUWESaveGameCollectionInfoViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FUWESaveGameCollectionInfo SaveGameCollectionInfo;
    
    UPROPERTY(BlueprintReadOnly)
    int32 SaveGameCollectionVersion;
    
    UPROPERTY(BlueprintReadOnly)
    EUWESaveGameValidity SaveGameValidity;
    
    UPROPERTY(BlueprintReadOnly)
    FString SlotName;
    
    UPROPERTY(BlueprintReadOnly)
    FGuid SaveId;
    
    UPROPERTY(BlueprintReadOnly)
    FString DisplayName;
    
    UPROPERTY(BlueprintReadOnly)
    FString LevelName;
    
    UPROPERTY(BlueprintReadOnly)
    FString GameMode;
    
    UPROPERTY(BlueprintReadOnly)
    FDateTime LastModified;
    
    UPROPERTY(BlueprintReadOnly)
    FDateTime CreatedAt;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsMultiplayerSave;
    
    UPROPERTY(BlueprintReadOnly)
    int32 CollectionVersion;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<UUWESaveGameInfoViewModel*> SaveGames;
    
    UUWESaveGameCollectionInfoViewModel();

    UFUNCTION(BlueprintPure)
    bool HasOnlyDefaultSave() const;
    
    UFUNCTION(BlueprintCallable)
    UUWESaveGameInfoViewModel* GetSaveInfoByIndex(const EUWESaveGameCollectionIndex Index);
    
    UFUNCTION(BlueprintPure)
    int32 GetNumSaves() const;
    
    UFUNCTION(BlueprintCallable)
    UUWESaveGameInfoViewModel* GetDefaultSaveInfo();
    
    UFUNCTION(BlueprintCallable)
    void AsyncSetCustomDisplayName(const FString& CustomName, FSaveGameSetDisplayNameFinishedDelegate OnSetNameComplete);
    
};

