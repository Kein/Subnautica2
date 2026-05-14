#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWESmartObjectData.h"
#include "UWEAIDecisionTargetInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FUWEAIDecisionTargetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TWeakObjectPtr<AActor> Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWESmartObjectData SmartObjectData;
    
    UWEAI_API FUWEAIDecisionTargetInfo();
};

