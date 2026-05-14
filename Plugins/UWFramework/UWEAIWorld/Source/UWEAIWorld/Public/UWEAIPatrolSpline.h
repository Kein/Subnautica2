#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "UWEAIScaleDeviationType.h"
#include "UWESaveCallbacks.h"
#include "UWEAIPatrolSpline.generated.h"

class UBillboardComponent;
class USplineComponent;
class UUWESaveComponent;

UCLASS()
class UWEAIWORLD_API AUWEAIPatrolSpline : public AActor, public IUWESaveCallbacks {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag PatrolSplineTag;
    
    UPROPERTY(EditAnywhere)
    bool IsDevelopmentOnly;
    
    UPROPERTY(EditAnywhere)
    FString FeatureFlag;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AActor> ActorClass;
    
    UPROPERTY(EditAnywhere)
    int32 ScaleDeviationPercent;
    
    UPROPERTY(EditAnywhere)
    UWEAIScaleDeviationType ScaleDeviationType;
    
    UPROPERTY(EditAnywhere)
    bool bGroup;
    
    UPROPERTY(EditAnywhere)
    int32 GroupMinSize;
    
    UPROPERTY(EditAnywhere)
    int32 GroupMaxSize;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftClassPtr<AActor>> GroupTypes;
    
    UPROPERTY(EditAnywhere)
    int32 GroupScaleDeviationPercent;
    
    UPROPERTY(EditAnywhere)
    UWEAIScaleDeviationType GroupScaleDeviationType;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBillboardComponent* SpawnPoint;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UUWESaveComponent* SaveComponent;
    
private:
    UPROPERTY(SaveGame)
    FTransform ActorTransform;
    
    UPROPERTY()
    TWeakObjectPtr<AActor> ActorInstance;
    
public:
    AUWEAIPatrolSpline(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

