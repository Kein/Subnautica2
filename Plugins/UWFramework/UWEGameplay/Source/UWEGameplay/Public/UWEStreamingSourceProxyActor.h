#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UWEStreamingSourceProxyActor.generated.h"

class UWorldPartitionStreamingSourceComponent;

UCLASS()
class UWEGAMEPLAY_API AUWEStreamingSourceProxyActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, VisibleAnywhere)
    UWorldPartitionStreamingSourceComponent* StreamingSourceComponent;
    
public:
    AUWEStreamingSourceProxyActor(const FObjectInitializer& ObjectInitializer);

};

