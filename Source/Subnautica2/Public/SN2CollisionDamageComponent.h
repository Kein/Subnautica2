#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "Engine/HitResult.h"
#include "UWECollisionImpactObjectData.h"
#include "SN2CollisionDamageComponent.generated.h"

class UPrimitiveComponent;

UCLASS(BlueprintType, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2CollisionDamageComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TEnumAsByte<ECollisionChannel>> IgnoreObjectTypes;
    
    UPROPERTY(Config)
    float MinCollisionSpeed;
    
    UPROPERTY(Config)
    float MaxCollisionSpeed;
    
    UPROPERTY(Config)
    float MinTimeBetweenDamage;
    
    UPROPERTY(Config)
    float MinCollisionDamage;
    
    UPROPERTY(Config)
    float MaxCollisionDamage;
    
public:
    USN2CollisionDamageComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnCollisionImpact(UPrimitiveComponent* OtherComponent, const FUWECollisionImpactObjectData& Payload, const FHitResult& Hit);
    
};

