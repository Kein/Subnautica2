#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "UWECelestialBodyComponent.generated.h"

class AActor;
class UComponentDropdownSelector;
class UUWECelestialBodyComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWESKY_API UUWECelestialBodyComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AxialRotationPeriodSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AxialRotationPhaseSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator AxialTilt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OrbitPeriodSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OrbitPhaseSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OrbitRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator OrbitTilt;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool bPrimaryCelestialBody;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TWeakObjectPtr<AActor> ActorProxy;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UComponentDropdownSelector* ComponentProxy;
    
private:
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UUWECelestialBodyComponent> PrimaryCelestialBody;
    
public:
    UUWECelestialBodyComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool HasParentComponent() const;
    
};

