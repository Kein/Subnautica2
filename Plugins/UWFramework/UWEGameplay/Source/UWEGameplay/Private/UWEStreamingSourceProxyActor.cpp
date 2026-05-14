#include "UWEStreamingSourceProxyActor.h"
#include "Components/SceneComponent.h"
#include "Components/WorldPartitionStreamingSourceComponent.h"

AUWEStreamingSourceProxyActor::AUWEStreamingSourceProxyActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->StreamingSourceComponent = CreateDefaultSubobject<UWorldPartitionStreamingSourceComponent>(TEXT("WorldPartitionStreamingSource"));
}


