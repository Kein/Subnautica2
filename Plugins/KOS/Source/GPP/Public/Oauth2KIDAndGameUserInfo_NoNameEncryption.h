#pragma once
#include "CoreMinimal.h"
#include "Oauth2GameUserInfo_NoNameEncryption.h"
#include "Oauth2KIDInfo_NoNameEncryption.h"
#include "Oauth2KIDAndGameUserInfo_NoNameEncryption.generated.h"

USTRUCT(BlueprintType)
struct GPP_API FOauth2KIDAndGameUserInfo_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOauth2KIDInfo_NoNameEncryption KID_Info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOauth2GameUserInfo_NoNameEncryption game_user;
    
    FOauth2KIDAndGameUserInfo_NoNameEncryption();
};

