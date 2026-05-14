#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "UWEWaterCurrentAffectedObjectData.h"
#include "UWEWaterCurrentOverlap.h"
#include "UWEOverlapWaterCurrent.generated.h"

UCLASS(Abstract)
class UWEWATERCURRENTS_API AUWEOverlapWaterCurrent : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FUWEWaterCurrentAffectedObjectData> AffectedObjects;
    
    UPROPERTY()
    TArray<FUWEWaterCurrentOverlap> OverlapPostponedList;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool DefaultEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ApplyLastVelocityOnExit;
    
public:
    AUWEOverlapWaterCurrent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWaterCurrentActive(bool InIsActive);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnExit(AActor* Actor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEnter(AActor* Actor);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnActiveStateChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    FVector GetVelocityAtLocation(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    float GetBaseSpeed();
    
};

