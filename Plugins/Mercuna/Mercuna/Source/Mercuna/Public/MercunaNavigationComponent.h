#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "Components/ActorComponent.h"
#include "EMercunaAvoidanceMode.h"
#include "EMercunaMoveResult.h"
#include "MercunaContextualSteeringActorParameters.h"
#include "MercunaUsageSpec.h"
#include "Templates/SubclassOf.h"
#include "MercunaNavigationComponent.generated.h"

class AActor;
class AController;
class UMercunaMovementAdapter;
class UMercunaPath;

UCLASS(Abstract, BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MERCUNA_API UMercunaNavigationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMercunaMoveStarted, FAIRequestID, RequestID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMercunaMoveComplete, FAIRequestID, RequestID, const TEnumAsByte<EMercunaMoveResult::Type>, Result);
    
    UPROPERTY(BlueprintAssignable)
    FMercunaMoveStarted OnMoveStarted;
    
    UPROPERTY(BlueprintAssignable)
    FMercunaMoveComplete OnMoveCompleted;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UMercunaMovementAdapter* MovementAdapter;
    
    UPROPERTY(EditAnywhere)
    EMercunaAvoidanceMode AvoidanceMode;
    
    UPROPERTY(EditAnywhere)
    FMercunaContextualSteeringActorParameters DefaultContextSteeringParameters;
    
    UPROPERTY(EditAnywhere)
    TMap<TSubclassOf<AActor>, FMercunaContextualSteeringActorParameters> ContextSteeringParameters;
    
    UPROPERTY()
    bool DynamicAvoidance;
    
    UPROPERTY(EditAnywhere)
    float AvoidanceWeightMultiplier;
    
    UPROPERTY(EditAnywhere)
    FMercunaUsageSpec UsageSpec;
    
    UPROPERTY(Transient)
    UMercunaPath* CurrentPath;
    
    UPROPERTY(Transient)
    AController* CurrentController;
    
public:
    UMercunaNavigationComponent(const FObjectInitializer& ObjectInitializer);

};

