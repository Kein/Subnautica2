#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UWEMaterialMappingDA.generated.h"

class UMaterialInterface;

UCLASS(BlueprintType)
class UWEWORLDPOPULATION2_API UUWEMaterialMappingDA : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftObjectPtr<UMaterialInterface>> AllowedMaterials;
    
    UUWEMaterialMappingDA();

};

