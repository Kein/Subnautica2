#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "UWEWorldPopLocationDebugInfo.h"
#include "UWESpawnDataSubsystem.generated.h"

class UUWESeededResourceSpatialData;
class UUWESpawningSpatialData;

UCLASS(BlueprintType)
class UWEWORLDPOPULATION2_API UUWESpawnDataSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UUWESpawningSpatialData* SpatialData;
    
    UPROPERTY(Transient)
    UUWESeededResourceSpatialData* SeededLocations;
    
    UPROPERTY(Transient)
    TArray<FGuid> ZonesAdded;
    
    UPROPERTY(Transient)
    TArray<FGuid> ZonesAddedCreatures;
    
public:
    UUWESpawnDataSubsystem();

    UFUNCTION(BlueprintCallable)
    FString GetStringFromDebugLocationInfo(const FUWEWorldPopLocationDebugInfo& InInfo);
    
    UFUNCTION(BlueprintCallable)
    FUWEWorldPopLocationDebugInfo GetLocationDebugInfo(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void DebugForceLoadSpatialData();
    
};

