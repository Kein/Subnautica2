#pragma once
#include "CoreMinimal.h"
#include "LobbyAchievementUnlockedNotif_NoNameEncryption.generated.h"

USTRUCT()
struct GPP_API FLobbyAchievementUnlockedNotif_NoNameEncryption {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Type;
    
    UPROPERTY()
    FString AchievementCode;
    
    FLobbyAchievementUnlockedNotif_NoNameEncryption();
};

