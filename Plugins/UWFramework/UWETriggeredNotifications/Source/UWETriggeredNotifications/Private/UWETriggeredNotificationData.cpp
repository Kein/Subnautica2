#include "UWETriggeredNotificationData.h"

UUWETriggeredNotificationData::UUWETriggeredNotificationData() {
    this->InputAction = NULL;
    this->duration = 4.50f;
    this->TriggerType = ETriggeredNotificationTriggerType::Manual;
    this->DisplayType = ETriggeredNotificationDisplayType::GameplayMessage;
    this->RemovalType = ETriggeredNotificationRemovalType::Manual;
    this->TriggerCount = 0;
    this->RemovalCount = 0;
    this->RemovalTimeSeconds = 0.00f;
    this->TargetActorClass = NULL;
    this->SearchRadius = 10.00f;
}


