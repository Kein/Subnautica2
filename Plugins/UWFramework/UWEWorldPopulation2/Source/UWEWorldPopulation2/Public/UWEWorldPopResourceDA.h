#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "UWEPrimaryDataAssetBase.h"
#include "UWEWorldPopResourceDA.generated.h"

class AActor;
class UStaticMesh;

UCLASS()
class UWEWORLDPOPULATION2_API UUWEWorldPopResourceDA : public UUWEPrimaryDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere)
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<AActor> ActorToPlace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UStaticMesh> PreviewMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ScaleDeviationPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESpawnActorCollisionHandlingMethod CollisionHandlingMethod;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FGuid ResourceGUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeToRespawnSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpawnRangeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AdjustForActorBounds;
    
    UUWEWorldPopResourceDA();

};

