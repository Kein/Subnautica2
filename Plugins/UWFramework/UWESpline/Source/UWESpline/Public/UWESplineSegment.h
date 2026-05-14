#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UWESplineSegment.generated.h"

class UUWESplineComponent;

USTRUCT(BlueprintType)
struct UWESPLINE_API FUWESplineSegment {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StartPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Length;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Extent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor Color;
    
private:
    UPROPERTY()
    FGuid UniqueID;
    
    UPROPERTY(Instanced)
    UUWESplineComponent* Owner;
    
public:
    FUWESplineSegment();
};

