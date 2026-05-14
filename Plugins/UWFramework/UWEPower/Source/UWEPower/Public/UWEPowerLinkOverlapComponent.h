#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/HitResult.h"
#include "UWEPowerLinkOverlapComponent.generated.h"

class AActor;
class UBoxComponent;
class UPrimitiveComponent;
class UUWEPowerNodeComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEPOWER_API UUWEPowerLinkOverlapComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnOverlapChanged, UUWEPowerNodeComponent*, node, bool, IsBlocked);
    
    UPROPERTY(BlueprintAssignable)
    FOnOverlapChanged OnOverlapChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBoxComponent* BoxCollider;
    
public:
    UUWEPowerLinkOverlapComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsOverlapped() const;
    
    UFUNCTION(BlueprintCallable)
    void Initialize(UUWEPowerNodeComponent* node, FVector Start, FVector End, float Width);
    
};

