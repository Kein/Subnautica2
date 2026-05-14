#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SN2MetalSeedData.generated.h"

class UMaterialInterface;
class UUWEResonatableData;

USTRUCT(BlueprintType)
struct SUBNAUTICA2_API FSN2MetalSeedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UUWEResonatableData* ResonatableData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* SeedMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag MetalTier;
    
    FSN2MetalSeedData();
};

