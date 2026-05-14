#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EGhostPrimitiveType.h"
#include "SN2GhostPrimitive.generated.h"

class USkeletalMesh;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FSN2GhostPrimitive {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    EGhostPrimitiveType Type;
    
    UPROPERTY(SaveGame)
    TSoftObjectPtr<UStaticMesh> StaticMesh;
    
    UPROPERTY(SaveGame)
    TSoftObjectPtr<USkeletalMesh> SkeletalMesh;
    
    UPROPERTY(SaveGame)
    FVector BoxExtents;
    
    UPROPERTY(SaveGame)
    float SphereRadius;
    
    UPROPERTY(SaveGame)
    float CapsuleHalfHeight;
    
    UPROPERTY(SaveGame)
    float CapsuleRadius;
    
    UPROPERTY(SaveGame)
    FName ShapeCollisionProfile;
    
    UPROPERTY(SaveGame)
    FTransform Transform;
    
    SUBNAUTICA2_API FSN2GhostPrimitive();
};

