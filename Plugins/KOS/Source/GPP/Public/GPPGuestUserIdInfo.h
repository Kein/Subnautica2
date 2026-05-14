#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "GPPGuestUserIdInfo.generated.h"

UCLASS()
class UGPPGuestUserIdInfo : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString ID;
    
    UGPPGuestUserIdInfo();

};

