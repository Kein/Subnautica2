#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EUWENotificationType.h"
#include "NotificationData.generated.h"

class APlayerState;
class UInputAction;
class UTexture2D;
class UUWEPrimaryDataAssetBase;

USTRUCT(BlueprintType)
struct UWENOTIFICATIONS_API FNotificationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText HeaderText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText HeaderSubText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText ButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EUWENotificationType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UUWEPrimaryDataAssetBase> DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UInputAction* InputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString InputActionString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<APlayerState> Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NotificationDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag RemovalVerb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag RemovalTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UUWEPrimaryDataAssetBase> RemovalAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 RemovalCount;
    
    FNotificationData();
};

