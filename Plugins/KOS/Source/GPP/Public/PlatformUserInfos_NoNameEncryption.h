#pragma once
#include "CoreMinimal.h"
#include "Temp_User_NoNameEncryption.h"
#include "PlatformUserInfos_NoNameEncryption.generated.h"

USTRUCT()
struct FPlatformUserInfos_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<FString, FTemp_User_NoNameEncryption> PlatformUserInfoMap;
    
    GPP_API FPlatformUserInfos_NoNameEncryption();
};

