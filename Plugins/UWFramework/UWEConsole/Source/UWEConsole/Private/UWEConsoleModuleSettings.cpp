#include "UWEConsoleModuleSettings.h"

UUWEConsoleModuleSettings::UUWEConsoleModuleSettings() {
    this->bLimitToAllowedCommandsInShipping = true;
    this->bLimitToAllowedCommandsInEverythingElse = true;
    this->Commands.AddDefaulted(12550);
    this->UnregisteredCommands.AddDefaulted(1);
}


