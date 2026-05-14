#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "GameFramework/PlayerState.h"
#include "Templates/SubclassOf.h"
#include "UWEGameplayPlayerState.generated.h"

class AActor;
class ACharacter;
class AGameplayAbilityTargetActor;
class UTexture2D;

UCLASS()
class UWEGAMEPLAY_API AUWEGameplayPlayerState : public APlayerState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TMap<TSubclassOf<AGameplayAbilityTargetActor>, AGameplayAbilityTargetActor*> CachedTargetActors;
    
private:
    UPROPERTY(ReplicatedUsing=OnRep_MainPlayerCharacter)
    ACharacter* MainPlayerCharacter;
    
public:
    AUWEGameplayPlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(Reliable, Server)
    void ServerSetMainPlayerCharacter(ACharacter* NewCharacter);
    
public:
    UFUNCTION()
    void OnRep_MainPlayerCharacter();
    
    UFUNCTION(BlueprintPure)
    UTexture2D* GetPlayerIcon() const;
    
    UFUNCTION(BlueprintPure)
    FColor GetPlayerColor() const;
    
    UFUNCTION(BlueprintPure)
    ACharacter* GetMainPlayerCharacter() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetHoverTarget() const;
    
    UFUNCTION(BlueprintPure)
    FHitResult GetHoverHitResult() const;
    
};

