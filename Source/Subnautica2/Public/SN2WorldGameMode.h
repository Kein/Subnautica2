#pragma once
#include "CoreMinimal.h"
#include "UWEGameConfigSettings.h"
#include "UWEGameModeBase.h"
#include "OnPlayerGameStartedDelegateBPDelegate.h"
#include "SN2WorldGameMode.generated.h"

class AController;
class APlayerController;
class AUWEBioBedManager;
class USN2PlayersCustomSaveInfo;
class UUWESaveHandle;

UCLASS(NonTransient)
class SUBNAUTICA2_API ASN2WorldGameMode : public AUWEGameModeBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerReady, APlayerController*, NewPlayer);
    
    UPROPERTY(BlueprintAssignable)
    FOnPlayerGameStartedDelegateBP OnPlayerGameStartedDelegateBP;
    
    UPROPERTY(Transient)
    AUWEBioBedManager* BioBedManager;
    
    UPROPERTY(BlueprintAssignable)
    FOnPlayerReady OnPlayerJoinedReady;
    
protected:
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
    UPROPERTY(SaveGame)
    TMap<int32, FString> PlayerIdsToExternalIds;
    
    UPROPERTY(SaveGame)
    int32 HostPlayerId;
    
    UPROPERTY()
    USN2PlayersCustomSaveInfo* PlayersCustomSaveInfo;
    
private:
    UPROPERTY(SaveGame)
    bool bWasEverMultiplayer;
    
    UPROPERTY(EditDefaultsOnly)
    FUWEGameConfigSettings GameSettingsOverrides;
    
    UPROPERTY(Transient)
    TArray<AController*> PendingRestartPlayers;
    
public:
    ASN2WorldGameMode(const FObjectInitializer& ObjectInitializer);

};

