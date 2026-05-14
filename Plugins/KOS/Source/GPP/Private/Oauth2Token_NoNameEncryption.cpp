#include "Oauth2Token_NoNameEncryption.h"

FOauth2Token_NoNameEncryption::FOauth2Token_NoNameEncryption() {
    this->Refresh_Expires_in = 0;
    this->Server_time = 0;
    this->Expires_in = 0.00f;
    this->Is_comply = false;
    this->Is_full_kid = false;
    this->is_ga_full_account = false;
    this->Error_Code = 0;
}

