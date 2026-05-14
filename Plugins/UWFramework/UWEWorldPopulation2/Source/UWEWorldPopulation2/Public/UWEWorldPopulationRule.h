#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UWEWorldPopulationRule.generated.h"

UCLASS(Abstract, BlueprintType, EditInlineNew)
class UWEWORLDPOPULATION2_API UUWEWorldPopulationRule : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText DisplayName;
    
    UPROPERTY(EditAnywhere)
    bool DebugRule;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    double TimeSpentOnLastRun;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FGuid Guid;
    
    UUWEWorldPopulationRule();

};

