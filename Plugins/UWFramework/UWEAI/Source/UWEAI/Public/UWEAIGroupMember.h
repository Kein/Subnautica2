#pragma once
#include "CoreMinimal.h"
#include "UWEAIGroupMember.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FUWEAIGroupMember {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<AActor> Entity;
    
    UWEAI_API FUWEAIGroupMember();
};

