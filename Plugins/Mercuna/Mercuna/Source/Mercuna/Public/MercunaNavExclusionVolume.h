#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EMercunaNavigationExclusionType.h"
#include "MercunaNavExclusionVolume.generated.h"

class AMercunaNavGraph;
class UMercunaVolumeComponent;

UCLASS()
class MERCUNA_API AMercunaNavExclusionVolume : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UMercunaVolumeComponent* VolumeComponent;
    
    UPROPERTY(EditAnywhere)
    bool bApplyToAllNavGraphs;
    
    UPROPERTY(EditAnywhere)
    AMercunaNavGraph* NavGraph;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMercunaNavigationExclusionType ExclusionType;
    
public:
    AMercunaNavExclusionVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSize(FVector Size);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFromGraphs();
    
    UFUNCTION(BlueprintPure)
    FVector GetSize() const;
    
    UFUNCTION(BlueprintCallable)
    void AddToGraph(AMercunaNavGraph* NewNavGraph);
    
    UFUNCTION(BlueprintCallable)
    void AddToAllGraphs();
    
};

