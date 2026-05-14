#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "SN2DynamicEventModifierVolume.generated.h"

class UBoxVolumeComponent;
class USceneComponent;

UCLASS()
class SUBNAUTICA2_API ASN2DynamicEventModifierVolume : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool ForceSpawnOnEnter;
    
    UPROPERTY(EditAnywhere, Instanced)
    USceneComponent* Root;
    
    UPROPERTY(EditAnywhere, Instanced)
    UBoxVolumeComponent* Volume;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer AllowedEvents;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer BlockedEvents;
    
public:
    ASN2DynamicEventModifierVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool AllowedToSpawnEvent(FGameplayTag EventTag);
    
};

