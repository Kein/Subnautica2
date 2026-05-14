#pragma once
#include "CoreMinimal.h"
#include "UWEAttackTicketPolicy.generated.h"

UENUM(BlueprintType)
enum class UWEAttackTicketPolicy : uint8 {
    IgnoreTickets,
    RequireAvailableTickets,
};

