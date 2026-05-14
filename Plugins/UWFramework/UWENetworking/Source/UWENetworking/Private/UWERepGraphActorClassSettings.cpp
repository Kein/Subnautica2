#include "UWERepGraphActorClassSettings.h"

FUWERepGraphActorClassSettings::FUWERepGraphActorClassSettings() {
    this->ClassNodeMapping = EUWEClassRepNodeMapping::NotRouted;
    this->bAddToRPC_Multicast_OpenChannelForClassMap = false;
    this->bRPC_Multicast_OpenChannelForClass = false;
}

