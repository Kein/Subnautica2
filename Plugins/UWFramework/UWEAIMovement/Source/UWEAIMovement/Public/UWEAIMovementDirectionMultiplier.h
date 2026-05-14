#pragma once
#include "CoreMinimal.h"
#include "UWEAIMovementDirectionMultiplier.generated.h"

USTRUCT(BlueprintType)
struct FUWEAIMovementDirectionMultiplier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Forward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Backward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Up;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Down;
    
    UWEAIMOVEMENT_API FUWEAIMovementDirectionMultiplier();
};

