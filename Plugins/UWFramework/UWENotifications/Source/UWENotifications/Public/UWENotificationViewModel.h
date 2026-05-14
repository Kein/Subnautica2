#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MVVMViewModelBase.h"
#include "EUWENotificationType.h"
#include "UWENotificationViewModel.generated.h"

class APlayerState;
class UInputAction;
class UTexture2D;
class UUWEPrimaryDataAssetBase;

UCLASS()
class UWENOTIFICATIONS_API UUWENotificationViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadOnly)
    FText HeaderText;
    
    UPROPERTY(BlueprintReadOnly)
    FText HeaderSubText;
    
    UPROPERTY(BlueprintReadOnly)
    FText Text;
    
    UPROPERTY(BlueprintReadOnly)
    FText ButtonText;
    
    UPROPERTY(BlueprintReadOnly)
    UInputAction* InputAction;
    
    UPROPERTY(BlueprintReadOnly)
    FString InputActionString;
    
    UPROPERTY(BlueprintReadOnly)
    EUWENotificationType Type;
    
    UPROPERTY(BlueprintReadOnly)
    TSoftObjectPtr<UUWEPrimaryDataAssetBase> DataAsset;
    
    UPROPERTY(BlueprintReadOnly)
    TSoftObjectPtr<APlayerState> Instigator;
    
    UPROPERTY(BlueprintReadOnly)
    float NotificationDuration;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayTag RemovalVerb;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayTag RemovalTag;
    
    UPROPERTY(BlueprintReadOnly)
    TSoftObjectPtr<UUWEPrimaryDataAssetBase> RemovalAsset;
    
    UPROPERTY(BlueprintReadOnly)
    int32 RemovalCount;
    
    UUWENotificationViewModel();

};

