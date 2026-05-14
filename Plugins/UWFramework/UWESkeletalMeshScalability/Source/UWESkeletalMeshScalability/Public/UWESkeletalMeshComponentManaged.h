#pragma once
#include "CoreMinimal.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "ESkeletalMeshScalabilityGroup.h"
#include "UWESkeletalMeshComponentManaged.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWESKELETALMESHSCALABILITY_API UUWESkeletalMeshComponentManaged : public USkeletalMeshComponentBudgeted {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 RelevancyPriorityBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESkeletalMeshScalabilityGroup ScalabilityGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SkeletalMeshMaxDrawSignificanceTreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bDoingReducedWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ReducedWork_ComponentTicksPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ReducedWork_UpdateRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ReducedWork_EvaluationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ReducedWork_BaseNonRenderedUpdateRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ReducedWork_SimulatePhysics;
    
    UUWESkeletalMeshComponentManaged(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool IsShowingSkeletal() const;
    
};

