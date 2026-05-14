#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "LegalScreenAcceptedVersions.h"
#include "UWEFrontendSavedState.generated.h"

UCLASS()
class UUWEFrontendSavedState : public USaveGame {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    bool bHasSeenBootFlow;
    
    UPROPERTY()
    FLegalScreenAcceptedVersions LegalScreenAcceptedVersions;
    
public:
    UUWEFrontendSavedState();

};

