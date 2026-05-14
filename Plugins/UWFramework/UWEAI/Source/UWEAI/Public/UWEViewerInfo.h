#pragma once
#include "CoreMinimal.h"
#include "UWEAIAwareness.h"
#include "UWEViewerInfo.generated.h"

class AActor;
class APlayerController;

USTRUCT(BlueprintType)
struct UWEAI_API FUWEViewerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    APlayerController* PlayerController;
    
    UPROPERTY(Transient)
    TMap<AActor*, FUWEAIAwareness> AwarenessMap;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AActor> AwarenessActor;
    
    FUWEViewerInfo();
};

