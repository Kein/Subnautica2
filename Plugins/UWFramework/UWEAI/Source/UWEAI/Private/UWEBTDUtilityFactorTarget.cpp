#include "UWEBTDUtilityFactorTarget.h"

UUWEBTDUtilityFactorTarget::UUWEBTDUtilityFactorTarget() {
    this->NodeName = TEXT("Utility Target");
    this->MustBeDetected = true;
    this->MustBeCurrentlyPerceived = false;
    this->AttackTicketPolicy = UWEAttackTicketPolicy::IgnoreTickets;
}


