#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/HitResult.h"
#include "UWECollisionImpactGameplayCue.h"
#include "UWEOnCollisionImpactDelegate.h"
#include "UWECollisionImpactComponent.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEPHYSICS_API UUWECollisionImpactComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool IsEnabled;
    
    UPROPERTY(EditAnywhere)
    FName ColliderTag;
    
    UPROPERTY(EditAnywhere)
    bool BounceOffStaticObjects;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FUWECollisionImpactGameplayCue> ImpactGameplayCues;
    
    UPROPERTY(EditAnywhere)
    float CoefficientOfRestitution;
    
    UPROPERTY(EditAnywhere)
    float SelfMassMult;
    
    UPROPERTY(EditAnywhere)
    float SelfVelocityMult;
    
    UPROPERTY(BlueprintAssignable)
    FUWEOnCollisionImpact OnCollisionImpact;
    
    UUWECollisionImpactComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnHitCallback(UPrimitiveComponent* SelfComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
    
};

