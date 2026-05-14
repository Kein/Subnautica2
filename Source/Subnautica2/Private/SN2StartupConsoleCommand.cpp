#include "SN2StartupConsoleCommand.h"

FSN2StartupConsoleCommand::FSN2StartupConsoleCommand() {
    this->Enabled = false;
    this->ExecuteTime = ESN2StartupConsoleCommandExecuteTime::PlayerGameStarted;
    this->Delay = 0.00f;
    this->ExecuteFromClient = false;
}

