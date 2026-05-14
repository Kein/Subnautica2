#include "UWESonarAPISubsystem.h"

UUWESonarAPISubsystem::UUWESonarAPISubsystem() {
    this->UWESonarAPIUrl = TEXT("https://api.live.subnautica.net");
    this->UWEAlternativeEventsUrl = TEXT("/api/v1/player/events");
    this->bDisableGPP = false;
    this->UWESonarLoginXSTSEndpoint = TEXT("https://dev.sonar.subnautica.net");
}


