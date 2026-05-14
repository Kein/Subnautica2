#pragma once
#include "CoreMinimal.h"
#include "UWEGameModeBase.h"
#include "Templates/SubclassOf.h"
#include "UWELobbyGameMode.generated.h"

class AGameModeBase;

UCLASS(NonTransient)
class UWELOBBY_API AUWELobbyGameMode : public AUWEGameModeBase {
    GENERATED_BODY()
public:
    AUWELobbyGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TravelToLevel(const FString& LevelName, const FString& SaveSlotName, const FString& GameModeAlias);
    
    UFUNCTION(BlueprintCallable)
    void StartNewServerGame(TSubclassOf<AGameModeBase> GameModeClass);
    
protected:
    UFUNCTION(BlueprintCallable)
    void StartNewLocalGameWithOptions(const FString& Options);
    
    UFUNCTION(BlueprintCallable)
    void StartNewLocalGame(TSubclassOf<AGameModeBase> GameModeClass);
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadLocalGame(const FString& SlotName, const FString& GameModeAlias, const FString& CheckpointName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ContinueFromLatestSave(const FString& LatestSave, const FString& GameModeAlias);
    
    UFUNCTION(BlueprintCallable)
    void ConnectToServer(const FString& ServerUrl);
    
};

