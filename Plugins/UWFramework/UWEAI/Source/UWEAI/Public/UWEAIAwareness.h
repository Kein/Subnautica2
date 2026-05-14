#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEAIAwareness.generated.h"

USTRUCT(BlueprintType)
struct FUWEAIAwareness {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    float Awareness;
    
    UPROPERTY(Transient)
    bool IsCurrentlyPerceived;
    
    UPROPERTY(Transient)
    bool IsDetected;
    
    UPROPERTY(Transient)
    FVector LastSensedLocation;
    
    UPROPERTY(Transient)
    bool IsPlayer;
    
    UWEAI_API FUWEAIAwareness();
};

