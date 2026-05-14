#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEPrimaryDataAssetBase.h"
#include "NotificationData.h"
#include "UWENotificationData.generated.h"

UCLASS()
class UWENOTIFICATIONS_API UUWENotificationData : public UUWEPrimaryDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FNotificationData Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag IdentifierTag;
    
    UUWENotificationData();

};

