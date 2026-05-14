#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UWEBreakableInterface.h"
#include "UWEHoveredName.h"
#include "UWEMetalFarmBreakableResource.generated.h"

class UCapsuleComponent;
class UUWEAssetDataComponent;
class UUWEResonatableData;

UCLASS()
class UWEFARMING_API AUWEMetalFarmBreakableResource : public AActor, public IUWEBreakableInterface, public IUWEHoveredName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame)
    bool bIsBreakingDisabled;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, SaveGame, VisibleAnywhere)
    UUWEAssetDataComponent* AssetData;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UCapsuleComponent* Collider;
    
    UPROPERTY(Replicated, SaveGame)
    FText MetalName;
    
public:
    AUWEMetalFarmBreakableResource(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetMetalData(UUWEResonatableData* ResonatableData, const FText& Name);
    

    // Fix for true pure virtual functions not being implemented
};

