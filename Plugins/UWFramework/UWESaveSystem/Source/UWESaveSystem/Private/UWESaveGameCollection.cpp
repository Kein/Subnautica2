#include "UWESaveGameCollection.h"

UUWESaveGameCollection::UUWESaveGameCollection() {
}

EUWESaveGameValidity UUWESaveGameCollection::GetValidityFromVersion(const int32 Version) {
    return EUWESaveGameValidity::Invalid_NotSet;
}

int32 UUWESaveGameCollection::GetMinSupportedVersion() {
    return 0;
}

int32 UUWESaveGameCollection::GetLatestVersion() {
    return 0;
}


