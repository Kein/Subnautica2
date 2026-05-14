#pragma once
#include "CoreMinimal.h"
#include "NotificationData.h"
#include "UWEStoryEvent.h"
#include "UWENotificationStoryEvent.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UWESTORYEVENTS_API UUWENotificationStoryEvent : public UUWEStoryEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FNotificationData Data;
    
    UUWENotificationStoryEvent();

};

