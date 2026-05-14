#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "MercunaUsageTypes.h"
#include "MercunaNavOctreeModifierVolume.generated.h"

class AMercunaNavOctree;
class UMercunaNavOctreeModifierComponent;

UCLASS()
class MERCUNA_API AMercunaNavOctreeModifierVolume : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UMercunaNavOctreeModifierComponent* VolumeComponent;
    
public:
    AMercunaNavOctreeModifierVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUsageTypes(const FMercunaUsageTypes& NewUsageTypes);
    
    UFUNCTION(BlueprintCallable)
    void SetSize(FVector Size);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetCostMultiplier(float NewCostMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFromOctree();
    
    UFUNCTION(BlueprintPure)
    FVector GetSize() const;
    
    UFUNCTION(BlueprintCallable)
    void AddToOctree(AMercunaNavOctree* NavOctree);
    
};

