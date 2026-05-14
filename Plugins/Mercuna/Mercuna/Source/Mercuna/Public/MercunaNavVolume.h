#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "MercunaNavVolume.generated.h"

class AMercunaNavGraph;
class UMercunaVolumeComponent;

UCLASS(Abstract)
class MERCUNA_API AMercunaNavVolume : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UMercunaVolumeComponent* VolumeComponent;
    
    UPROPERTY(EditAnywhere)
    bool PreciseBoundaries;
    
    UPROPERTY(NonTransactional, Transient)
    AMercunaNavGraph* NavGraphPtr;
    
public:
    AMercunaNavVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSize(FVector Size);
    
    UFUNCTION(BlueprintCallable)
    void SetNavigationRotation(const FRotator& Rotation);
    
    UFUNCTION(BlueprintPure)
    FVector GetSize() const;
    
};

