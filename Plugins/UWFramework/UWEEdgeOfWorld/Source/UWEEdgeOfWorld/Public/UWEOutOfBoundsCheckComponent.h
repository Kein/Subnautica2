#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EVolumeType.h"
#include "Templates/SubclassOf.h"
#include "UWEOutOfBoundsCheckComponent.generated.h"

class AActor;
class APawn;
class UCommonActivatableWidget;
class UGameplayEffect;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEEDGEOFWORLD_API UUWEOutOfBoundsCheckComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UGameplayEffect> OutOfBoundsEffect;
    
    UPROPERTY(EditDefaultsOnly)
    float OutOfBoundsPeriodicCheckTime;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UCommonActivatableWidget> OutOfBoundsNotificationWidget;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UCommonActivatableWidget> EdgeOfWorldThanksNotificationWidget;
    
public:
    UUWEOutOfBoundsCheckComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TriggerEdgeOfWorldCollision(AActor* Instigator);
    
private:
    UFUNCTION()
    void OnVolumeChanged(EVolumeType VolumeType);
    
    UFUNCTION()
    void OnPlayerOverlapEnd(APawn* Player);
    
    UFUNCTION()
    void OnPlayerOverlapBegin(APawn* Player);
    
    UFUNCTION(Client, Reliable)
    void NotifyPlayerThanks();
    
    UFUNCTION(Client, Reliable)
    void NotifyPlayerOutOfBounds();
    
};

