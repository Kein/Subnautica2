#include "SN2TeamMemberViewModel.h"

USN2TeamMemberViewModel::USN2TeamMemberViewModel() {
    this->PlayerId = 0;
    this->PlayerIcon = NULL;
    this->HealthPercent = 0.00f;
    this->WaterPercent = 0.00f;
    this->FoodPercent = 0.00f;
    this->OxygenPercent = 0.00f;
    this->bHealthLow = false;
    this->bWaterLow = false;
    this->bFoodLow = false;
    this->bOxygenLow = false;
    this->DistanceMeters = 0.00f;
    this->DepthMeters = 0.00f;
    this->EquippedTool = NULL;
    this->bInVehicle = false;
    this->bHasPing = false;
    this->World = NULL;
}


