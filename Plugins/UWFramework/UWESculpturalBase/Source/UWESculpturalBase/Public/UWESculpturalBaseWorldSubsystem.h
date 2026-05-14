#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "UWECellUpdateList.h"
#include "UWESculpturalBaseWorldSubsystem.generated.h"

class APlayerController;
class AUWESculpturalBaseActor;
class UUWELoadingScreenGISubsystem;

UCLASS(BlueprintType)
class UWESCULPTURALBASE_API UUWESculpturalBaseWorldSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBaseRegistered, AUWESculpturalBaseActor*, base);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAnyBaseChanged, AUWESculpturalBaseActor*, base, const FUWECellUpdateList&, CellUpdates);
    
private:
    UPROPERTY(Transient)
    UUWELoadingScreenGISubsystem* LoadingSubsystem;
    
    UPROPERTY(Transient)
    TArray<AUWESculpturalBaseActor*> RegisteredBases;
    
    UPROPERTY(Transient)
    TArray<AUWESculpturalBaseActor*> BasesToReplicate;
    
    UPROPERTY(Transient)
    TArray<APlayerController*> PlayersReplicatedTo;
    
    UPROPERTY(Transient)
    bool bReplicationFinished;
    
public:
    UUWESculpturalBaseWorldSubsystem();

    UFUNCTION(BlueprintCallable)
    void UnRegisterBase(AUWESculpturalBaseActor* base);
    
    UFUNCTION(BlueprintCallable)
    void RegisterBase(AUWESculpturalBaseActor* base);
    
};

