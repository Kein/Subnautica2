#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "MVVMViewModelBase.h"
#include "EUWESaveGameValidity.h"
#include "Templates/SubclassOf.h"
#include "UWESaveGameCustomInfo.h"
#include "UWESaveGameInfoViewModel.generated.h"

class UTexture2D;
class UUWESaveGameCustomInfoBaseViewModel;

UCLASS()
class UWESAVESYSTEM_API UUWESaveGameInfoViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    EUWESaveGameValidity SaveGameValidity;
    
    UPROPERTY(BlueprintReadOnly)
    int32 SaveGameVersion;
    
protected:
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
    UTexture2D* Thumbnail;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<UUWESaveGameCustomInfoBaseViewModel*> CustomInfoViewModels;
    
    UPROPERTY()
    FUWESaveGameCustomInfo SaveGameCustomInfo;
    
    UPROPERTY()
    int64 SaveGameSize;
    
public:
    UUWESaveGameInfoViewModel();

    UFUNCTION(BlueprintCallable)
    bool SetDisplayName(const FString& InDisplayName);
    
    UFUNCTION(BlueprintPure)
    bool IsMultiplayerSave() const;
    
    UFUNCTION(BlueprintPure)
    FString GetSlotName() const;
    
    UFUNCTION(BlueprintPure)
    FString GetLevelName() const;
    
    UFUNCTION(BlueprintPure)
    FDateTime GetLastModified() const;
    
    UFUNCTION(BlueprintPure)
    FString GetDisplayName() const;
    
    UFUNCTION(BlueprintCallable)
    UUWESaveGameCustomInfoBaseViewModel* GetCustomInfoViewModel(TSubclassOf<UUWESaveGameCustomInfoBaseViewModel> ViewModelClass);
    
};

