#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "GPPLastLoggedInfoModel_NoNameEncryption.h"
#include "GPPLastLoggedInfo_NoNameEncryption.generated.h"

UCLASS()
class GPP_API UGPPLastLoggedInfo_NoNameEncryption : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGPPLastLoggedInfoModel_NoNameEncryption Model;
    
    UGPPLastLoggedInfo_NoNameEncryption();

};

