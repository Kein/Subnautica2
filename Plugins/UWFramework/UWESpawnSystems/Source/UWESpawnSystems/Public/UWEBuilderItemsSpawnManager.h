#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UWEServerWorldSubsystem.h"
#include "UWEBuilderItemsSave.h"
#include "UWEBuilderItemsSpawnManager.generated.h"

class AActor;
class UUWESaveHandle;

UCLASS()
class UWESPAWNSYSTEMS_API UUWEBuilderItemsSpawnManager : public UUWEServerWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
    UPROPERTY(SaveGame)
    FUWEBuilderItemsSave BuilderItemsSave;
    
    UPROPERTY(Transient)
    TMap<FGuid, AActor*> ActorFindById;
    
    UPROPERTY(Transient)
    TMap<AActor*, FGuid> IdFindByActor;
    
    UPROPERTY(Transient)
    TSet<FSoftObjectPath> PathsBeingLoaded;
    
    UPROPERTY(Transient)
    TSet<FGuid> ActiveItems;
    
    UPROPERTY(Transient)
    TMap<TSoftClassPtr<AActor>, bool> DestroyActorsWhenStreaming;
    
public:
    UUWEBuilderItemsSpawnManager();

protected:
    UFUNCTION()
    void OnActorDestroyed(AActor* DestroyedActor);
    
};

