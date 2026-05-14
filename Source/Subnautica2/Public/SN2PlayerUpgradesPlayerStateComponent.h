#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWEEventKey.h"
#include "SN2PlayerUpgradesPlayerStateComponent.generated.h"

class APawn;
class APlayerState;
class UFMODEvent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2PlayerUpgradesPlayerStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText InventoryIncreasedText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText ToolbarIncreasedText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText PassiveBiomodSlotsIncreasedText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFMODEvent* ToolbarIncreasedSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFMODEvent* InventoryIncreasedSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFMODEvent* PassiveBiomodSlotsIncreasedSound;
    
public:
    USN2PlayerUpgradesPlayerStateComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnPawnSet(APlayerState* Player, APawn* NewPawn, APawn* OldPawn);
    
    UFUNCTION()
    void OnEventTrackerIncreaseToolbarEvent(FUWEEventKey EventKey, int32 OldValue, int32 NewValue);
    
    UFUNCTION()
    void OnEventTrackerIncreasePassiveBiomodSlotsEvent(FUWEEventKey EventKey, int32 OldValue, int32 NewValue);
    
    UFUNCTION()
    void OnEventTrackerIncreaseInventoryEvent(FUWEEventKey EventKey, int32 OldValue, int32 NewValue);
    
};

