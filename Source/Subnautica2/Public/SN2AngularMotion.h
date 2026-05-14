#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SN2AngularMotion.generated.h"

USTRUCT(BlueprintType)
struct FSN2AngularMotion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FQuat Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector AngularVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AngularDrag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Mass;
    
    SUBNAUTICA2_API FSN2AngularMotion();
};

