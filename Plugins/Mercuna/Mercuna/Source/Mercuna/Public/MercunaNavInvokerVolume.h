#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EMercunaInvokerVolumeType.h"
#include "MercunaNavInvokerVolume.generated.h"

class AMercunaNavGroundGrid;
class UMercunaVolumeComponent;

UCLASS()
class MERCUNA_API AMercunaNavInvokerVolume : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UMercunaVolumeComponent* VolumeComponent;
    
    UPROPERTY(EditAnywhere)
    AMercunaNavGroundGrid* NavGrid;
    
    UPROPERTY(EditAnywhere)
    EMercunaInvokerVolumeType Type;
    
public:
    AMercunaNavInvokerVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetType(const EMercunaInvokerVolumeType& NewType);
    
    UFUNCTION(BlueprintCallable)
    void SetSize(FVector Size);
    
    UFUNCTION(BlueprintPure)
    FVector GetSize() const;
    
    UFUNCTION(BlueprintCallable)
    void AddToGrid(AMercunaNavGroundGrid* NewNavGrid);
    
};

