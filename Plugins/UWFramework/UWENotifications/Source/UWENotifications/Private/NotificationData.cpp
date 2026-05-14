#include "NotificationData.h"

FNotificationData::FNotificationData() {
    this->Type = EUWENotificationType::Generic;
    this->InputAction = NULL;
    this->NotificationDuration = 0.00f;
    this->RemovalCount = 0;
}

