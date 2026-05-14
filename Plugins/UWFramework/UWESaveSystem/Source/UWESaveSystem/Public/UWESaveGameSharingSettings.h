#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "UWESaveGameSharingSettings.generated.h"

class ACharacter;
class AGameModeBase;
class AGameStateBase;
class APlayerController;
class APlayerState;

UCLASS(DefaultConfig, Config=UWESaveGameSharing)
class UWESAVESYSTEM_API UUWESaveGameSharingSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<AGameStateBase> GameStateClass;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<AGameModeBase> SurvivalGameModeClass;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<AGameModeBase> CreativeGameModeClass;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<APlayerState> PlayerStateClass;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<ACharacter> PlayerCharacterClass;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<APlayerController> PlayerControllerClass;
    
    UUWESaveGameSharingSettings();

};

