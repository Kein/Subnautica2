#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MVVMViewModelBase.h"
#include "EUWESaveGameValidity.h"
#include "SaveInfoRefreshDelegateDelegate.h"
#include "UWESaveGameCollectionInfoListViewModel.generated.h"

class UObject;
class UUWESaveGameCollectionInfoViewModel;

UCLASS()
class UWESAVESYSTEM_API UUWESaveGameCollectionInfoListViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    TArray<UUWESaveGameCollectionInfoViewModel*> AllEntries;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<UUWESaveGameCollectionInfoViewModel*> SinglePlayerEntries;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<UUWESaveGameCollectionInfoViewModel*> MultiPlayerEntries;
    
    UPROPERTY()
    UObject* WorldContext;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHasAnySinglePlayerSaves;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHasMultiPlayerSaves;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHasAvailableSlots;
    
public:
    UUWESaveGameCollectionInfoListViewModel();

    UFUNCTION(BlueprintCallable)
    void RefreshAsync(const FString& LevelName, FSaveInfoRefreshDelegate OnRefreshCompleted);
    
    UFUNCTION(BlueprintPure)
    int32 GetSlotPostFix(bool bIsMultiplayer) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumSinglePlayerEntries() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumSaveEntries(bool bIsMultiplayer) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumMultiPlayerEntries() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumAllSaveEntries() const;
    
    UFUNCTION(BlueprintPure)
    void GetLatestSaveSlot(const FString& LevelName, FString& SlotName, EUWESaveGameValidity& IsValid, bool bIsMultiplayer) const;
    
    UFUNCTION(BlueprintCallable)
    void DeleteGame(const FString& SlotName, FGuid SaveId);
    
};

