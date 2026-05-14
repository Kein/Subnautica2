#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UWEAIMovementCoreModuleSettingsPack.h"
#include "UWEAIMovementCoreModuleData.generated.h"

USTRUCT(BlueprintType)
struct UWEAIMOVEMENT_API FUWEAIMovementCoreModuleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FUWEAIMovementCoreModuleSettingsPack Settings;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float ForceProportion;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float DragProportion;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Velocity;
    
    UPROPERTY(BlueprintReadOnly)
    FVector VelocityDirection;
    
    UPROPERTY(BlueprintReadOnly)
    float VelocityMagnitudeSqr;
    
    UPROPERTY(BlueprintReadOnly)
    float VelocityMagnitude;
    
    UPROPERTY(BlueprintReadOnly)
    FVector DesiredSteeringDirection;
    
    UPROPERTY(BlueprintReadOnly)
    FVector SteeringDirection;
    
    UPROPERTY(BlueprintReadOnly)
    FQuat SteeringRotation;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsDesiredLookDirectionEnabled;
    
    UPROPERTY(BlueprintReadOnly)
    FVector DesiredLookDirection;
    
    UPROPERTY(BlueprintReadOnly)
    FQuat RelativeLookRotation;
    
    UPROPERTY(BlueprintReadOnly)
    FQuat LookRotation;
    
    FUWEAIMovementCoreModuleData();
};

