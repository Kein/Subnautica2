#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/PawnMovementComponent.h"
#include "Mercuna3DMovementInterface.h"
#include "Mercuna3DMovementProperties.h"
#include "Mercuna3DMovementComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MERCUNA3DMOVEMENT_API UMercuna3DMovementComponent : public UPawnMovementComponent, public IMercuna3DMovementInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMercuna3DMovementProperties MovementProperties;
    
    UPROPERTY(Transient)
    uint8 bPositionCorrected: 1;
    
    UPROPERTY()
    FVector PendingImpulseToApply;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector Acceleration;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector AngularVelocity;
    
public:
    UMercuna3DMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVelocity(FVector NewVelocity);
    
    UFUNCTION(BlueprintCallable)
    void SetVelocitiesFromPhysics();
    
    UFUNCTION(BlueprintCallable)
    void SetMovementProperties(const FMercuna3DMovementProperties& NewMovementProperties);
    
    UFUNCTION(BlueprintCallable)
    void SetAngularVelocity(FVector NewAngVel);
    
    UFUNCTION(BlueprintPure)
    FMercuna3DMovementProperties GetMovementProperties() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLocalVelocity() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetLocalRotationRate() const;
    
    UFUNCTION(BlueprintCallable)
    void AddImpulse(FVector Impulse);
    

    // Fix for true pure virtual functions not being implemented
};

