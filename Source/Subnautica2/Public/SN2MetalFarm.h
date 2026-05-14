#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UWEInventoryItem.h"
#include "OnSeedChangedDelegate.h"
#include "SN2MetalSeedData.h"
#include "Templates/SubclassOf.h"
#include "SN2MetalFarm.generated.h"

class UStaticMeshComponent;
class UUWEInventoryComponent;
class UUWEInventoryInteractionComponent;
class UUWEItemType;
class UUWESaveComponent;
class UUWESeedGrowerComponent;

UCLASS()
class SUBNAUTICA2_API ASN2MetalFarm : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UUWEInventoryInteractionComponent* InventoryInteraction;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEInventoryComponent* InventoryComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWESaveComponent* SaveComponent;
    
    UPROPERTY(BlueprintReadOnly, Replicated, SaveGame, VisibleAnywhere)
    UUWEItemType* CurrentItemType;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    TArray<UUWESeedGrowerComponent*> SeedGrowerComponents;
    
    UPROPERTY(BlueprintAssignable)
    FOnSeedChanged OnSeedChanged;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<UUWEItemType*, FSN2MetalSeedData> ItemTypeToSeedClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AActor> SeedClass;
    
public:
    ASN2MetalFarm(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnSeedSpawned(AActor* Actor);
    
    UFUNCTION()
    void OnSeedRemoved(const FUWEInventoryItem& InventoryItem);
    
    UFUNCTION()
    void OnSeedAdded(const FUWEInventoryItem& InventoryItem);
    
};

