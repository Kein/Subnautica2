#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWEActorStreamedOutState.h"
#include "UWEBuilderItemsCullingComponent.generated.h"

class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWESPAWNSYSTEMS_API UUWEBuilderItemsCullingComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<AActor*> ActorsRegisteredForCulling;
    
    UPROPERTY(Transient)
    TMap<AActor*, FUWEActorStreamedOutState> ActorStreamedOutState;
    
public:
    UUWEBuilderItemsCullingComponent(const FObjectInitializer& ObjectInitializer);

};

