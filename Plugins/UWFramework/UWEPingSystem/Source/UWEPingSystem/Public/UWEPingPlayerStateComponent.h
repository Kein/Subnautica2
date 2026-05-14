#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "UWEPingPlayerStateComponent.generated.h"

class APlayerState;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEPINGSYSTEM_API UUWEPingPlayerStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UUWEPingPlayerStateComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPingVisibilityForPlayer(APlayerState* PlayerState, FGuid UniqueID, bool bNewValue);
    
private:
    UFUNCTION(Reliable, Server)
    void ServerSetPingVisibilityForPlayer(APlayerState* PlayerState, FGuid UniqueID, bool bNewValue);
    
};

