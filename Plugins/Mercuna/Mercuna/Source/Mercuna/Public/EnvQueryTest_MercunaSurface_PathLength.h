#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "UObject/NoExportTypes.h"
#include "EnvQueryTest_Mercuna2D_PathLength.h"
#include "EnvQueryTest_MercunaSurface_PathLength.generated.h"

UCLASS()
class MERCUNA_API UEnvQueryTest_MercunaSurface_PathLength : public UEnvQueryTest_Mercuna2D_PathLength {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FVector UpDirection;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue FollowNavLinks;
    
    UEnvQueryTest_MercunaSurface_PathLength();

};

