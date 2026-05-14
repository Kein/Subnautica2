#include "UWEBioBedStatics.h"

UUWEBioBedStatics::UUWEBioBedStatics() {
}

void UUWEBioBedStatics::UnassignPawnFromBioBed(const APawn* Pawn) {
}

void UUWEBioBedStatics::SpawnPawnAtBioBed(APawn* Pawn, AUWEBioBedBase* biobed) {
}

bool UUWEBioBedStatics::IsPlayerAssignedToBioBed(AUWEBioBedBase* biobed, const APawn* Player) {
    return false;
}

bool UUWEBioBedStatics::IsPlayerAssignedToAnyBioBed(const APawn* Pawn) {
    return false;
}

bool UUWEBioBedStatics::IsLocalPlayerAssignedToBioBed(AUWEBioBedBase* biobed) {
    return false;
}

void UUWEBioBedStatics::AssignPawnToBioBed(const APawn* Pawn, AUWEBioBedBase* biobed) {
}


