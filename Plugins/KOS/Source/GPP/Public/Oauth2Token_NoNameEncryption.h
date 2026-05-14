#pragma once
#include "CoreMinimal.h"
#include "Oauth2TokenBan_NoNameEncryption.h"
#include "Oauth2TokenPermission_NoNameEncryption.h"
#include "Oauth2Token_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FOauth2Token_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Access_Token;
    
    UPROPERTY(EditAnywhere)
    FString Refresh_Token;
    
    UPROPERTY(EditAnywhere)
    FString Token_type;
    
    UPROPERTY(EditAnywhere)
    int32 Refresh_Expires_in;
    
    UPROPERTY(EditAnywhere)
    int64 Server_time;
    
    UPROPERTY(EditAnywhere)
    float Expires_in;
    
    UPROPERTY(EditAnywhere)
    bool Is_comply;
    
    UPROPERTY(EditAnywhere)
    TArray<FOauth2TokenPermission_NoNameEncryption> Permissions;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> Roles;
    
    UPROPERTY(EditAnywhere)
    TArray<FOauth2TokenBan_NoNameEncryption> Bans;
    
    UPROPERTY(EditAnywhere)
    FString User_Id;
    
    UPROPERTY(EditAnywhere)
    FString Display_Name;
    
    UPROPERTY(EditAnywhere)
    FString Namespace;
    
    UPROPERTY(EditAnywhere)
    FString Platform_id;
    
    UPROPERTY(EditAnywhere)
    FString Platform_user_id;
    
    UPROPERTY(EditAnywhere)
    FString Game_server_id;
    
    UPROPERTY()
    bool Is_full_kid;
    
    UPROPERTY()
    bool is_ga_full_account;
    
    UPROPERTY()
    FString Krafton_ID;
    
    UPROPERTY()
    int32 Error_Code;
    
    UPROPERTY()
    FString Error_Message;
    
    UPROPERTY()
    FString Country;
    
    FOauth2Token_NoNameEncryption();
};

