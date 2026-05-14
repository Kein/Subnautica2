#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "SN2AbilityTask_WaitForCollision.generated.h"

class AActor;
class UGameplayAbility;
class UPrimitiveComponent;
class USN2AbilityTask_WaitForCollision;

UCLASS()
class SUBNAUTICA2_API USN2AbilityTask_WaitForCollision : public UAbilityTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFailed, float, CollisionMagnitude);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCompleted, float, CollisionMagnitude);
    
protected:
    UPROPERTY(BlueprintAssignable)
    FOnCompleted OnCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FOnFailed OnFailed;
    
    UPROPERTY(Export)
    TWeakObjectPtr<UPrimitiveComponent> PrimitiveComponent;
    
    UPROPERTY()
    float TargetCollisionStrength;
    
public:
    USN2AbilityTask_WaitForCollision();

    UFUNCTION(BlueprintCallable)
    static USN2AbilityTask_WaitForCollision* WaitForCollision(UGameplayAbility* OwningAbility, float MinCollisionStrength);
    
private:
    UFUNCTION()
    void OnComponentHit(UPrimitiveComponent* SelfComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
    
};

