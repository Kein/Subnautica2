#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWETargetActor.h"
#include "UWEInteractComponent.generated.h"

class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UWEINTERACT_API UUWEInteractComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    int32 UWEMaxHoverTargetMeters;
    
    UPROPERTY(Config)
    int32 UWEMaxHoverTargetCapsuleHeightMeters;
    
    UPROPERTY(Config)
    int32 UWEMaxDebugHoverTargetMeters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* ForcedHoverTargetActor;
    
    UUWEInteractComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Reliable, Server)
    void UpdateSelectedTargetOnServer(AActor* InTarget);
    
    UFUNCTION(Reliable, Server)
    void UpdateHoverTargetOnServer(FUWETargetActor InHoverTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedFromHoverTarget();
    
    UFUNCTION(Reliable, Server)
    void Server_Interact(FUWETargetActor Target);
    
    UFUNCTION()
    void Interact_Internal(FUWETargetActor Target);
    
    UFUNCTION(BlueprintPure)
    AActor* GetSelectedTargetActor();
    
    UFUNCTION(BlueprintPure)
    FUWETargetActor GetHoverTarget();
    
};

