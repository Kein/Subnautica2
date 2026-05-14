#pragma once
#include "CoreMinimal.h"
#include "UWENonGenerativeBaseModuleVariant.h"
#include "UWEBaseModuleHeightVariant.generated.h"

USTRUCT(BlueprintType)
struct FUWEBaseModuleHeightVariant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 HeightWithinLevel;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool MainLevelRoom;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FUWENonGenerativeBaseModuleVariant> VariantMeshes;
    
    UWESCULPTURALBASE_API FUWEBaseModuleHeightVariant();
};

