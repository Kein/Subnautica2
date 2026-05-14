#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "LastAppVersionInfoModel_NoNameEncryption.generated.h"

UCLASS()
class GPP_API ULastAppVersionInfoModel_NoNameEncryption : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString LatestVersion;
    
    ULastAppVersionInfoModel_NoNameEncryption();

};

