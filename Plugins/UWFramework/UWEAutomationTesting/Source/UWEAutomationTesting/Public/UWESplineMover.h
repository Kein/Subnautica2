#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UWESplineMover.generated.h"

class APlayerController;
class AUWEVideoTourPath;

UCLASS()
class AUWESplineMover : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    AActor* TargetActorCam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    APlayerController* TargetPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    AUWEVideoTourPath* VideoTourPath;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    bool bPlaying;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    bool bPaused;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    float PathT;
    
    AUWESplineMover(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StopMoving();
    
    UFUNCTION(BlueprintCallable)
    void StartMovingPlayerController(APlayerController* InTargetPlayerController, AUWEVideoTourPath* Path);
    
    UFUNCTION(BlueprintCallable)
    void StartMovingActor(AActor* InTargetActor, AUWEVideoTourPath* Path);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerStopMoving();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerStartMovingFromActor(AActor* InTargetActorCam, AUWEVideoTourPath* Path);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerPauseMoving();
    
    UFUNCTION(BlueprintCallable)
    void PauseMoving();
    
    UFUNCTION(BlueprintCallable)
    void MoveTargetActor();
    
};

