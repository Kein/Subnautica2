#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/LatentActionManager.h"
#include "EMercunaPathEvent.h"
#include "MercunaUsageSpec.h"
#include "MercunaNavTestingActor.generated.h"

class AMercunaNavGraph;
class UMercunaPath;
class UObject;
class USphereComponent;

UCLASS(Abstract)
class MERCUNA_API AMercunaNavTestingActor : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMercunaPathUpdated);
    
    UPROPERTY(EditAnywhere)
    uint8 bSearchStart: 1;
    
    UPROPERTY(EditAnywhere)
    FMercunaUsageSpec UsageSpec;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float MaxPathLength;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bAllowPartialPath;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bContinuouslyRepath: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bRaycast: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bAutomaticRepath;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    FString PathStatus;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    uint8 bPathExist: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    uint8 bPathIsPartial: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    uint8 bPathIsOutOfNodes: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    float PathLength;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    int32 PathSections;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    float PathFindTime;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    int32 PathNodesUsed;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 PathFindRepeats;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bDisplayAverageTime;
    
protected:
    UPROPERTY(Instanced)
    USphereComponent* SphereComponent;
    
    UPROPERTY(Transient)
    UMercunaPath* Path;
    
    UPROPERTY(Transient)
    AMercunaNavGraph* NavGraph;
    
public:
    AMercunaNavTestingActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void Repath();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void PathfindLatent(bool& Result, UObject* WorldContextObject, FLatentActionInfo LatentInfo, bool bAllowPartial);
    
    UFUNCTION()
    void OnPathUpdate(TEnumAsByte<EMercunaPathEvent::Type> PathEvent);
    
    UFUNCTION()
    void OnNavGraphBuildComplete(bool Success);
    
};

