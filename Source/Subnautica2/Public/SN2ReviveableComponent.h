#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SN2ReviveableComponent.generated.h"

class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2ReviveableComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_ReviveProgress)
    float ReviveProgress;
    
    USN2ReviveableComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void ResetReviveProgress();
    
    UFUNCTION()
    void OnRep_ReviveProgress(float OldProgress);
    
    UFUNCTION()
    void OnDied(AActor* SourceActor, AActor* TargetActor);
    
    UFUNCTION(BlueprintPure)
    bool CanGetRevived() const;
    
    UFUNCTION(BlueprintCallable)
    void AddReviveProgress(float NewAddReviveProgress);
    
};

