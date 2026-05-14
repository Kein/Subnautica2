#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "UObject/NoExportTypes.h"
#include "EnvQueryTest_Mercuna2D_Reachable.h"
#include "EnvQueryTest_MercunaSurface_Reachable.generated.h"

UCLASS()
class MERCUNA_API UEnvQueryTest_MercunaSurface_Reachable : public UEnvQueryTest_Mercuna2D_Reachable {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FVector UpDirection;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue FollowNavLinks;
    
    UEnvQueryTest_MercunaSurface_Reachable();

};

