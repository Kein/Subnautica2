#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "UWEGameModeBase.generated.h"

class APlayerController;
class AUWEPlayerStart;
class AUWEStreamingSourceProxyActor;

UCLASS(NonTransient)
class UWEGAMEPLAY_API AUWEGameModeBase : public AGameModeBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerJoined, APlayerController*, NewPlayer);
    
    UPROPERTY(BlueprintAssignable)
    FOnPlayerJoined OnPlayerJoined;
    
protected:
    UPROPERTY(SaveGame, VisibleAnywhere)
    AUWEPlayerStart* PlayerStart;
    
    UPROPERTY(Transient)
    TMap<APlayerController*, AUWEStreamingSourceProxyActor*> TempPlayerSpawnStreamingProxies;
    
public:
    AUWEGameModeBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPlayerStart(AUWEPlayerStart* NewPlayerStart);
    
    UFUNCTION(BlueprintPure)
    AUWEPlayerStart* GetPlayerStart() const;
    
};

