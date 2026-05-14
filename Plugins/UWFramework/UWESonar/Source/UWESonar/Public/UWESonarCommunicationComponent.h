#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWESonarCommunicationComponent.generated.h"

class APlayerController;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWESONAR_API UUWESonarCommunicationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UUWESonarCommunicationComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Reliable, Server)
    void ServerSetSonarInfoForClient(APlayerController* PlayerController, const FString& SonarPlayerId, const FString& PlatformUserId, const FString& PlatformProvider);
    
};

