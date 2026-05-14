#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "SN2GhostPlacement.h"
#include "SN2GhostCustomizer.generated.h"

UCLASS()
class SUBNAUTICA2_API ASN2GhostCustomizer : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool OverrideGhost;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsPlacementLegal;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FGameplayTag> CannotActivateReasons;
    
public:
    ASN2GhostCustomizer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void UpdateMeshes(const FSN2GhostPlacement& Placement);
    
};

