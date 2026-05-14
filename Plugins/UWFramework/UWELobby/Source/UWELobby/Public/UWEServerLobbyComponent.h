#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWESaveSlotMetaData.h"
#include "Templates/SubclassOf.h"
#include "UWEServerLobbyComponent.generated.h"

class AGameModeBase;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWELOBBY_API UUWEServerLobbyComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSaveSlotsChanged, const TArray<FUWESaveSlotMetaData>&, SaveSlots);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEnteringGame);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SaveSlots)
    TArray<FUWESaveSlotMetaData> SaveSlots;
    
    UPROPERTY(BlueprintAssignable)
    FOnSaveSlotsChanged OnSaveSlotsChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnEnteringGame OnEnteringGame;
    
    UUWEServerLobbyComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void StartNewGame(TSubclassOf<AGameModeBase> GameModeClass);
    
    UFUNCTION()
    void OnRep_SaveSlots();
    
    UFUNCTION(BlueprintCallable)
    void NotifyEnteringGame();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void LoadGame(const FString& SlotName, const FString& GameModeAlias);
    
    UFUNCTION()
    void BroadcastEnteringGame();
    
};

