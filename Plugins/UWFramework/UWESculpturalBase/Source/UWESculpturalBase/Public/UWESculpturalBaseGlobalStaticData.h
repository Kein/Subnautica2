#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TrackedVolumeData.h"
#include "UWESculpturalBaseGlobalStaticData.generated.h"

class UMaterialInstance;
class UStaticMesh;

UCLASS(BlueprintType)
class UWESCULPTURALBASE_API UUWESculpturalBaseGlobalStaticData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstance* SelectionMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UStaticMesh* CellOverlapMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTrackedVolumeData BaseOverlapVolumeData;
    
    UUWESculpturalBaseGlobalStaticData();

};

