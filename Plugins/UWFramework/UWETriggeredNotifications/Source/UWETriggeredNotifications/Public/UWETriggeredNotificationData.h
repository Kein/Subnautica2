#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "UWEPrimaryDataAssetBase.h"
#include "ETriggeredNotificationDisplayType.h"
#include "ETriggeredNotificationRemovalType.h"
#include "ETriggeredNotificationTriggerType.h"
#include "Templates/SubclassOf.h"
#include "UWETriggeredNotificationData.generated.h"

class AActor;
class UInputAction;
class UUWEStoryGoal;

UCLASS()
class UWETRIGGEREDNOTIFICATIONS_API UUWETriggeredNotificationData : public UUWEPrimaryDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText TriggeredNotificationText;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UInputAction* InputAction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString InputActionString;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float duration;
    
    UPROPERTY(EditDefaultsOnly)
    ETriggeredNotificationTriggerType TriggerType;
    
    UPROPERTY(EditDefaultsOnly)
    ETriggeredNotificationDisplayType DisplayType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ETriggeredNotificationRemovalType RemovalType;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag TriggerVerb;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag TriggerTag;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UUWEPrimaryDataAssetBase> TriggerAsset;
    
    UPROPERTY(EditDefaultsOnly)
    int32 TriggerCount;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UUWEStoryGoal> TriggerStoryGoal;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag NotifySeverity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag RemovalVerb;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag RemovalTag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UUWEPrimaryDataAssetBase> RemovalAsset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RemovalCount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UUWEStoryGoal> RemovalStoryGoal;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RemovalTimeSeconds;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<AActor> TargetActorClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SearchRadius;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector Offset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TSoftClassPtr<AActor>> VisibilityCheckActorsToIgnore;
    
    UUWETriggeredNotificationData();

};

