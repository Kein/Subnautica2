#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "UObject/NoExportTypes.h"
#include "WEEQT_Depth.generated.h"

UCLASS()
class UWEAI_API UWEEQT_Depth : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FFloatRange DepthRange;
    
    UWEEQT_Depth();

};

