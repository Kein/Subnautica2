#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEPrimaryDataAssetBase.h"
#include "UWEPlayerCustomizationSet.h"
#include "UWEPlayerCustomizationSetDA.generated.h"

UCLASS()
class UWEPLAYERCUSTOMIZATION_API UUWEPlayerCustomizationSetDA : public UUWEPrimaryDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FUWEPlayerCustomizationSet CustomizationSet;
    
    UPROPERTY(EditAnywhere)
    FGuid Guid;
    
    UUWEPlayerCustomizationSetDA();

};

