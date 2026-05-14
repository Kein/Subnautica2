#pragma once
#include "CoreMinimal.h"
#include "MercunaNavTestingActor.h"
#include "MercunaNavTestingActor.h"
#include "MercunaNavOctreeTestingActor.generated.h"

class AMercunaNavOctreeTestingActor;

UCLASS()
class MERCUNA_API AMercunaNavOctreeTestingActor : public AMercunaNavTestingActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, NonTransactional)
    AMercunaNavOctreeTestingActor* OtherActor;
    
    UPROPERTY(EditAnywhere)
    float Radius;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float HeightChangePenalty;
    
    UPROPERTY(EditAnywhere)
    float MaxSpeed;
    
    UPROPERTY(EditAnywhere)
    float MaxAcceleration;
    
    UPROPERTY(BlueprintAssignable, NonPIEDuplicateTransient)
    AMercunaNavTestingActor::FMercunaPathUpdated OnPathUpdated;
    
    AMercunaNavOctreeTestingActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void BP_SetSearchStart(bool bIsSearchStart);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetOtherActor(AMercunaNavTestingActor* OtherTestingActor);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetMaxPathLength(float NewMaxPathLength);
    
};

