#include "UWETimeOfDayStatics.h"

UUWETimeOfDayStatics::UUWETimeOfDayStatics() {
}

bool UUWETimeOfDayStatics::IsNight(UObject* WorldContextObject) {
    return false;
}

bool UUWETimeOfDayStatics::IsDaylight(UObject* WorldContextObject) {
    return false;
}

bool UUWETimeOfDayStatics::IsDay(UObject* WorldContextObject) {
    return false;
}

float UUWETimeOfDayStatics::GetTimeOfDayFraction(UObject* WorldContextObject) {
    return 0.0f;
}

UUWETimeOfDayComponent* UUWETimeOfDayStatics::GetTimeOfDayComponent(UObject* WorldContextObject) {
    return NULL;
}

FHourMinute UUWETimeOfDayStatics::GetTimeOfDay(UObject* WorldContextObject) {
    return FHourMinute{};
}

double UUWETimeOfDayStatics::GetNumGameDays(UObject* WorldContextObject) {
    return 0.0;
}

EDayPhase UUWETimeOfDayStatics::GetDayPhase(UObject* WorldContextObject) {
    return EDayPhase::None;
}

int32 UUWETimeOfDayStatics::GetDayNumber(UObject* WorldContextObject) {
    return 0;
}


