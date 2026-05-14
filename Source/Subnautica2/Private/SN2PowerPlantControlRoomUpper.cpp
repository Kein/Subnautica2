#include "SN2PowerPlantControlRoomUpper.h"

ASN2PowerPlantControlRoomUpper::ASN2PowerPlantControlRoomUpper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void ASN2PowerPlantControlRoomUpper::OnUnlockedStoryGoal(UUWEStoryGoal* UnlockedStoryGoal, AActor* ReceivingActor) {
}

void ASN2PowerPlantControlRoomUpper::MulticastActivateCode_Implementation(const AActor* TriggerActor) {
}

bool ASN2PowerPlantControlRoomUpper::IsTurbineFixed() const {
    return false;
}

bool ASN2PowerPlantControlRoomUpper::IsLowerNeedleConnected() const {
    return false;
}

bool ASN2PowerPlantControlRoomUpper::IsConsoleActive() const {
    return false;
}

bool ASN2PowerPlantControlRoomUpper::IsComplete() const {
    return false;
}

bool ASN2PowerPlantControlRoomUpper::CanActivateCode_Implementation() {
    return false;
}



