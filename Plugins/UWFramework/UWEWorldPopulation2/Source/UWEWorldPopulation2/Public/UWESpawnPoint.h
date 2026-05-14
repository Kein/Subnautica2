#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWESpawnPoint.generated.h"

USTRUCT(BlueprintType)
struct FUWESpawnPoint {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector AvgHitLocation;
    
    UPROPERTY(EditAnywhere)
    FVector AvgHitNormal;
    
    UPROPERTY(EditAnywhere)
    FVector PrimaryHitLocation;
    
    UPROPERTY(EditAnywhere)
    FVector PrimaryHitNormal;
    
    UPROPERTY(EditAnywhere)
    TArray<FVector> HitLocations;
    
    UPROPERTY(EditAnywhere)
    TArray<FVector> HitNormals;
    
    UWEWORLDPOPULATION2_API FUWESpawnPoint();
};

FORCEINLINE uint32 GetTypeHash(const FUWESpawnPoint) { return 0; }