#pragma once
#include "CoreMinimal.h"
#include "UWEScannableActorReason.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FUWEScannableActorReason {
    GENERATED_BODY()
public:
    UPROPERTY()
    TWeakObjectPtr<AActor> Actor;
    
    SUBNAUTICA2_API FUWEScannableActorReason();
};

