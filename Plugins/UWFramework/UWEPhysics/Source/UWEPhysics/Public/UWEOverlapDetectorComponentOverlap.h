#pragma once
#include "CoreMinimal.h"
#include "UWEOverlapDetectorComponentOverlap.generated.h"

class AActor;
class UPrimitiveComponent;

USTRUCT()
struct FUWEOverlapDetectorComponentOverlap {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UPrimitiveComponent* OverlappedComponent;
    
    UPROPERTY()
    TWeakObjectPtr<AActor> Actor;
    
    UPROPERTY()
    bool IsOverlapped;
    
    UWEPHYSICS_API FUWEOverlapDetectorComponentOverlap();
};

