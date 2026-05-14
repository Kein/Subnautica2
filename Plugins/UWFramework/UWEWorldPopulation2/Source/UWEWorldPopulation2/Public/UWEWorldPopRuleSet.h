#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UWEWorldPopResourceInterfaceSpawnSettings.h"
#include "UWEWorldPopRuleSet.generated.h"

class UUWEWorldPopRuleFilter;
class UUWEWorldPopRuleFilterPoints;
class UUWEWorldPopRuleGather;
class UUWEWorldPopRulePlacement;

UCLASS(BlueprintType)
class UWEWORLDPOPULATION2_API UUWEWorldPopRuleSet : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FGuid Guid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double Density;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWEWorldPopResourceInterfaceSpawnSettings ResourceInterfaceSpawnSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UUWEWorldPopRuleGather*> GatherRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UUWEWorldPopRuleFilter*> FilterRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UUWEWorldPopRulePlacement* PlacementRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UUWEWorldPopRuleFilterPoints*> FilterPointRules;
    
    UUWEWorldPopRuleSet();

};

