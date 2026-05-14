#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AIPerceptionTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "UWEAIAwareness.h"
#include "UWEAIPerceptionComponent.generated.h"

class AActor;
class AUWEAIController;
class UUWEAIArchetypeDataAsset;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEAI_API UUWEAIPerceptionComponent : public UAIPerceptionComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UUWEAIArchetypeDataAsset* ArchetypeData;
    
    UPROPERTY(Transient)
    TMap<AActor*, FUWEAIAwareness> AwarenessMap;
    
    UPROPERTY(Transient)
    AUWEAIController* UWEAIOwner;
    
public:
    UUWEAIPerceptionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Reload();
    
protected:
    UFUNCTION()
    void OnTargetPerceptionUpdate(AActor* Actor, FAIStimulus Stimulus);
    
    UFUNCTION()
    void OnTargetPerceptionForgot(AActor* Actor);
    
    UFUNCTION()
    void OnTargetEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsPlayer(AActor* PerceivedActor);
    
    UFUNCTION(BlueprintPure)
    bool IsDetected(AActor* PerceivedActor);
    
    UFUNCTION(BlueprintPure)
    bool IsCurrentlyPerceived(AActor* PerceivedActor);
    
    UFUNCTION(BlueprintPure)
    float GetSightRadius();
    
    UFUNCTION(BlueprintPure)
    float GetLoseSightRadius();
    
    UFUNCTION(BlueprintPure)
    FVector GetLastSensedLocation(AActor* PerceivedActor);
    
};

