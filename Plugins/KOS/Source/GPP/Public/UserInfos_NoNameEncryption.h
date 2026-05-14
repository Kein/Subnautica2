#pragma once
#include "CoreMinimal.h"
#include "Temp_User_NoNameEncryption.h"
#include "UserInfos_NoNameEncryption.generated.h"

USTRUCT()
struct FUserInfos_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTemp_User_NoNameEncryption> UserInfoList;
    
    GPP_API FUserInfos_NoNameEncryption();
};

