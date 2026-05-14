#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SN2BuilderBlockingShape.generated.h"

USTRUCT(BlueprintType)
struct FSN2BuilderBlockingShape {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector position;
    
    UPROPERTY()
    FQuat Rotation;
    
    UPROPERTY()
    FVector BoxExtent;
    
    UPROPERTY()
    int32 ObjectsBlockedBy;
    
    SUBNAUTICA2_API FSN2BuilderBlockingShape();
};

