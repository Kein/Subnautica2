#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "UWEPrimaryDataAssetBaseArray.h"
#include "UWEAssetRegistrySubsystem.generated.h"

class UObject;

UCLASS()
class UWEASSETREGISTRY_API UUWEAssetRegistrySubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<UClass*, FUWEPrimaryDataAssetBaseArray> CachedDataAssets;
    
    UPROPERTY()
    TSet<UClass*> CachedAssetClasses;
    
    UPROPERTY()
    TArray<UObject*> CachedAssets;
    
    UPROPERTY()
    TArray<UClass*> CachedBlueprintClasses;
    
public:
    UUWEAssetRegistrySubsystem();

};

