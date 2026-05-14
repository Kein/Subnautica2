#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "MVVMViewModelBase.h"
#include "SN2RespawnViewModel.generated.h"

class UObject;
class USN2RespawnViewModel;
class UUWEItemType;
class UWorld;

UCLASS()
class SUBNAUTICA2_API USN2RespawnViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<UUWEItemType*> LostItems;
    
    UPROPERTY(BlueprintReadOnly)
    FVector DeathLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FVector RespawnLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayTag DeathReason;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayTag RespawnReason;
    
    UPROPERTY(BlueprintReadOnly)
    FText DeathDirectionAndDistance;
    
private:
    UPROPERTY()
    UWorld* World;
    
public:
    USN2RespawnViewModel();

    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContext"))
    static USN2RespawnViewModel* GetViewModel(UObject* WorldContext);
    
};

