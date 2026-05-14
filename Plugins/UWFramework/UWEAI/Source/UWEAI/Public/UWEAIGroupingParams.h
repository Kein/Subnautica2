#pragma once
#include "CoreMinimal.h"
#include "UWEAIScaleDeviationType.h"
#include "UWEAIGroupingParams.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FUWEAIGroupingParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MinSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ScaleDeviationPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWEAIScaleDeviationType ScaleDeviationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftClassPtr<AActor>> GroupTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IgnoreCollisionBetweenMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bForceDisableLODs;
    
    UWEAI_API FUWEAIGroupingParams();
};

