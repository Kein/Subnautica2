#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "EMercunaObstacleMovementType.h"
#include "EMercunaObstacleReaction.h"
#include "EMercunaObstacleType.h"
#include "MercunaObstacleComponent.generated.h"

class ACharacter;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MERCUNA_API UMercunaObstacleComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bAutomatic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMercunaObstacleType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SphereRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector BoxSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CylinderRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CylinderHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMercunaObstacleMovementType MovementType;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    EMercunaObstacleReaction DefaultReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCutOutWhenStationary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StationaryThresholdTime;
    
    UMercunaObstacleComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateMovementType(const EMercunaObstacleMovementType& NewMovementType);
    
private:
    UFUNCTION()
    void OnCharacterMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode);
    
};

