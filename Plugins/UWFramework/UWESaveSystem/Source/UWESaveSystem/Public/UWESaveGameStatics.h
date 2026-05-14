#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EUWESaveGameCollectionIndex.h"
#include "EUWESaveSlotFilter.h"
#include "SaveUnblockedDelegateDelegate.h"
#include "SaveUpgradeCompletedDelegateDelegate.h"
#include "UWESaveBlockingHandle.h"
#include "UWESaveGameCollectionInfo.h"
#include "UWESaveGameStatics.generated.h"

class AActor;
class UUWESaveComponent;
class UUWESaveGameCustomInfoBase;
class UUWESaveHandle;

UCLASS(BlueprintType)
class UWESAVESYSTEM_API UUWESaveGameStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWESaveGameStatics();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void UpgradeSaveGameCollectionToLatest(const FUWESaveGameCollectionInfo& Info, FSaveUpgradeCompletedDelegate CompletedDelegate);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void UpdateCustomSaveGameInfo(UUWESaveGameCustomInfoBase* InObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void UnblockSavingWithDelegate(UPARAM(Ref) FUWESaveBlockingHandle& Handle, FSaveUnblockedDelegate Delegate, bool bShouldTrySaveAfterUnblocking);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void UnblockSaving(UPARAM(Ref) FUWESaveBlockingHandle& InHandle, bool bShouldTrySaveAfterUnblocking);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void SetAutoSaveEnabled(bool InValue);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool RegisterCustomSaveGameInfo(UUWESaveGameCustomInfoBase* InObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void OpenSavesFolder();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintPure)
    static bool IsSavingBlocked();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintPure)
    static bool IsSaveSystemInitialized();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintPure)
    static bool IsAutoSaveEnabledForTests();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintPure)
    static bool IsAutoSaveEnabled();
    
    UFUNCTION(BlueprintPure)
    static int32 GetMaxSaveSlots();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static FString GetDisplayNameForSlot(const FString& InSlotName, EUWESaveSlotFilter Match);
    
    UFUNCTION(BlueprintPure)
    static FString GetCheckpointIndexAsString(const EUWESaveGameCollectionIndex Index);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void GetAllExistingSaveGames(TArray<FString>& SaveGames, const int32 UserIndex);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void EnableAutoSaveForTests(bool InValue);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool DataExistsForSaveHandle(const UUWESaveHandle* Handle);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void CalculateDisplayBytes(int64 NumBytes, float& OutBytes, FString& OutAbbrev);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static FUWESaveBlockingHandle BlockSaving(bool bShouldTrySaveBeforeBlocking);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static UUWESaveComponent* AddSaveComponent(AActor* Target, bool bCheckAlreadyAdded);
    
};

