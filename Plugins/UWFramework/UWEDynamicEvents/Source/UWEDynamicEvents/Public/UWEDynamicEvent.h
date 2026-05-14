#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "UWEDynamicEvent.generated.h"

UCLASS()
class UWEDYNAMICEVENTS_API AUWEDynamicEvent : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated)
    FGuid EventID;
    
    UPROPERTY(Replicated)
    AActor* EventRootActor;
    
    UPROPERTY(Replicated)
    AActor* EventKeyActor;
    
private:
    UPROPERTY(EditDefaultsOnly)
    float MaxTimeActive;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxDistanceFromRootActor;
    
public:
    AUWEDynamicEvent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintPure)
    AActor* GetEventRootActor() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetEventKeyActor() const;
    
    UFUNCTION(BlueprintPure)
    FGuid GetEventID() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    AActor* FindClosestActorOfType(TSubclassOf<AActor> ActorClass, float& OutDistance);
    
};

