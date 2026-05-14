#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EUWEMovementComponentInfluenceType.h"
#include "UWEOverlapDetectorComponent.h"
#include "UWEOverlapExpellerComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEPHYSICS_API UUWEOverlapExpellerComponent : public UUWEOverlapDetectorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EUWEMovementComponentInfluenceType InfluenceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Magnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector DirectionMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool MoveAffectedObjectWithActorVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ActorVelocityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AffectObjectActorTag;
    
    UUWEOverlapExpellerComponent(const FObjectInitializer& ObjectInitializer);

};

