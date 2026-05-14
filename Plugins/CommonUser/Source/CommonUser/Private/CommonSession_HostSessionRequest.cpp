#include "CommonSession_HostSessionRequest.h"

UCommonSession_HostSessionRequest::UCommonSession_HostSessionRequest() {
    this->OnlineMode = ECommonSessionOnlineMode::Offline;
    this->bUseLobbies = false;
    this->bUseLobbiesVoiceChat = false;
    this->bUsePresence = false;
    this->MaxPlayerCount = 16;
}


