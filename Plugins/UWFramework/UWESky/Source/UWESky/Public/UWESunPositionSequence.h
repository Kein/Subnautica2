#pragma once
#include "CoreMinimal.h"
#include "ProceduralSequences/SunPositionSequence.h"
#include "UWESunPositionSequence.generated.h"

USTRUCT()
struct FUWESunPositionSequence : public FSunPositionSequence {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bUseSunRemapping;
    
    UPROPERTY(EditAnywhere)
    float StartDay;
    
    UPROPERTY(EditAnywhere)
    float DawnLength;
    
    UPROPERTY(EditAnywhere)
    float StartNight;
    
    UPROPERTY(EditAnywhere)
    float DuskLength;
    
    UWESKY_API FUWESunPositionSequence();
};

