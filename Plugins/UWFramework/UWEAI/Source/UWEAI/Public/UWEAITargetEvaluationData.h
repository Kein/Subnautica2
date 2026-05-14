#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EUWEAITargetEvaluationBulkFilter.h"
#include "EUWEAITargetEvaluationValueCalculation.h"
#include "UWEAITargetEvaluationData.generated.h"

USTRUCT(BlueprintType)
struct FUWEAITargetEvaluationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagQuery TagFilter;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EUWEAITargetEvaluationBulkFilter BulkFilter;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EUWEAITargetEvaluationValueCalculation ValueCalculationStrategy;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FFloatRange DistanceFilter;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool InHabitat;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HabitatInflationValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IncludeTargetRadiusInHabitatCheck;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IncludeKnownActors;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool InTargetViewCone;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HalfAngleDegViewCone;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxDistanceViewCone;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName AttachmentSlotNamePrefix;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Weight;
    
    UWEAI_API FUWEAITargetEvaluationData();
};

