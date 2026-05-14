#include "SonarPlayerEntitlement.h"

FSonarPlayerEntitlement::FSonarPlayerEntitlement() {
    this->SonarId = 0;
    this->Status = ESonarEntitlementStatus::CLAIMED;
    this->Source = ESonarEntitlementSource::SONAR;
}

