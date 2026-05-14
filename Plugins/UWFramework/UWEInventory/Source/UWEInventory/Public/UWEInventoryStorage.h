#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "UWESaveCallbacks.h"
#include "UWEInventoryContainer.h"
#include "UWEInventoryStorageContainer.h"
#include "UWEInventoryStorage.generated.h"

class UUWESaveComponent;

UCLASS()
class UWEINVENTORY_API AUWEInventoryStorage : public AActor, public IUWESaveCallbacks {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    FGuid SaveId;
    
    UPROPERTY(BlueprintReadWrite, Replicated, SaveGame, VisibleAnywhere)
    TArray<FUWEInventoryStorageContainer> StorageContainers;
    
    UPROPERTY(BlueprintReadOnly, Replicated, SaveGame, VisibleAnywhere)
    FUWEInventoryContainer ItemsContainer;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWESaveComponent* SaveComponent;
    
    AUWEInventoryStorage(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION()
    void Save();
    

    // Fix for true pure virtual functions not being implemented
};

