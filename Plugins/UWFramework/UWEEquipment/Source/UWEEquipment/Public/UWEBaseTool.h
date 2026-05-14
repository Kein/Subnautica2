#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEBaseEquippable.h"
#include "UWEToolInterface.h"
#include "UWEBaseTool.generated.h"

class ACharacter;
class UUWEItemType;

UCLASS()
class UWEEQUIPMENT_API AUWEBaseTool : public AUWEBaseEquippable, public IUWEToolInterface {
    GENERATED_BODY()
public:
    AUWEBaseTool(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetAmmoCount(float InCurrentAmmo, float InMaxAmmo);
    
    UFUNCTION(BlueprintPure)
    bool HasAmmo() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTagContainer GetRequiredAmmoTags() const;
    
    UFUNCTION(BlueprintPure)
    ACharacter* GetHoldingPlayer();
    
    UFUNCTION(BlueprintPure)
    UUWEItemType* GetAmmoType() const;
    
    UFUNCTION(BlueprintPure)
    float GetAmmoPercent() const;
    

    // Fix for true pure virtual functions not being implemented
};

