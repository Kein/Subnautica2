#pragma once
#include "CoreMinimal.h"
#include "UWEGrowthData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FUWEGrowthData {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame, VisibleAnywhere)
    float TimeStarted;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    float Growth;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    float GrowthMultiplier;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    float OverrideRipenTime;
    
    UPROPERTY()
    AActor* SeedActor;
    
    UWEFARMING_API FUWEGrowthData();
};

