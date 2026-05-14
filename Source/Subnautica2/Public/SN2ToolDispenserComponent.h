#pragma once
#include "CoreMinimal.h"
#include "SN2ToolHolderComponent.h"
#include "SN2ToolDispenserComponent.generated.h"

class AActor;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2ToolDispenserComponent : public USN2ToolHolderComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool AutoSpawn;
    
    UPROPERTY(EditAnywhere)
    float SpawnCooldownRate;
    
    UPROPERTY(SaveGame)
    double SpawnTimerStartedAt;
    
public:
    USN2ToolDispenserComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void SpawnItem(TSoftClassPtr<AActor> Class);
    
    UFUNCTION()
    void SpawnDefaultItem();
    
};

