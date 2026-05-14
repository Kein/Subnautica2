#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UWEChildActor.generated.h"

UCLASS()
class UWECHILDACTOR_API AUWEChildActor : public AActor {
    GENERATED_BODY()
public:
    AUWEChildActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void OnParentActorReady(AActor* ParentActor);
    
    UFUNCTION(BlueprintPure)
    AActor* GetParentOrAttachParentActor() const;
    
};

