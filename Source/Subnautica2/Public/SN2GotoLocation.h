#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "SN2GotoLocation.generated.h"

class UTexture2D;

UCLASS(BlueprintType)
class SUBNAUTICA2_API USN2GotoLocation : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere)
    FString Name;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere)
    FVector Location;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere)
    FRotator Rotation;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* Image;
    
    UPROPERTY(EditAnywhere)
    FText OptionalLongDescription;
    
    UPROPERTY(EditAnywhere)
    FString OutlinerFolder;
    
    USN2GotoLocation();

};

