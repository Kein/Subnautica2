#include "SN2PowerPlantControlRoomLower.h"

ASN2PowerPlantControlRoomLower::ASN2PowerPlantControlRoomLower(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void ASN2PowerPlantControlRoomLower::OnUnlockedStoryGoal(UUWEStoryGoal* UnlockedStoryGoal, AActor* ReceivingActor) {
}

void ASN2PowerPlantControlRoomLower::MulticastLaunchNeedle_Implementation() {
}


bool ASN2PowerPlantControlRoomLower::IsUpperControlTowerComplete() const {
    return false;
}

bool ASN2PowerPlantControlRoomLower::IsConsoleActive() const {
    return false;
}

bool ASN2PowerPlantControlRoomLower::IsComplete() const {
    return false;
}

bool ASN2PowerPlantControlRoomLower::IsBlocked() const {
    return false;
}

bool ASN2PowerPlantControlRoomLower::CanLaunchNeedle() const {
    return false;
}


