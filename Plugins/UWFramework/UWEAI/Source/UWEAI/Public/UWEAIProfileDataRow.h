#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UWEAIProfileDataRow.generated.h"

USTRUCT(BlueprintType)
struct FUWEAIProfileDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float DamageMultiplier;
    
    UPROPERTY(EditAnywhere)
    float AccelerationAwarenessMultiplier;
    
    UPROPERTY(EditAnywhere)
    float DecelerationAwarenessMultiplier;
    
    UPROPERTY(EditAnywhere)
    float SightRadiusMultiplier;
    
    UPROPERTY(EditAnywhere)
    float LoseSightRadiusMultiplier;
    
    UPROPERTY(EditAnywhere)
    float PeripheralVisionAngleDegreesMultiplier;
    
    UPROPERTY(EditAnywhere)
    float HabitatRadiusMultiplier;
    
    UWEAI_API FUWEAIProfileDataRow();
};

