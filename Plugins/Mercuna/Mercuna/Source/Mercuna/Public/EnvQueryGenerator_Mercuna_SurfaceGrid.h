#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "UObject/NoExportTypes.h"
#include "EnvQueryGenerator_Mercuna_2DNavGrid.h"
#include "EnvQueryGenerator_Mercuna_SurfaceGrid.generated.h"

UCLASS(EditInlineNew)
class MERCUNA_API UEnvQueryGenerator_Mercuna_SurfaceGrid : public UEnvQueryGenerator_Mercuna_2DNavGrid {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FVector UpDirection;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue FollowNavLinks;
    
    UEnvQueryGenerator_Mercuna_SurfaceGrid();

};

