#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "UWEScubaMaskComponent.generated.h"

class UStaticMeshComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWESCUBAMASK_API UUWEScubaMaskComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UStaticMeshComponent* TopLeft;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UStaticMeshComponent* TopRight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UStaticMeshComponent* Nose;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UStaticMeshComponent* BottomRight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UStaticMeshComponent* BottomLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DistanceFromCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AspectRatioThresholdForCorners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FOVExponent;
    
public:
    UUWEScubaMaskComponent(const FObjectInitializer& ObjectInitializer);

};

