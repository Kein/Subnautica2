#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "RecentLoginPlatform.generated.h"

UCLASS()
class URecentLoginPlatform : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString RecentLoginPlatform;
    
    URecentLoginPlatform();

};

