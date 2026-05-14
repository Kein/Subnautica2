#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SN2DeconstructableComponent.h"
#include "SN2EmbeddedDeconstructComponent.generated.h"

class UObject;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2EmbeddedDeconstructComponent : public USN2DeconstructableComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated, SaveGame)
    bool RemoveCells;
    
    UPROPERTY(Replicated, SaveGame)
    FGameplayTag BrushType;
    
private:
    UPROPERTY()
    UObject* CachedEditAction;
    
public:
    USN2EmbeddedDeconstructComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

