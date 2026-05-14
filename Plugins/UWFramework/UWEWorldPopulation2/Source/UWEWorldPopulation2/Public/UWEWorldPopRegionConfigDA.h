#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UWEWorldPopRuleSetArray.h"
#include "UWEWorldPopRegionConfigDA.generated.h"

class UUWEWorldPopResourceDA;

UCLASS(BlueprintType)
class UWEWORLDPOPULATION2_API UUWEWorldPopRegionConfigDA : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<TSoftObjectPtr<UUWEWorldPopResourceDA>, FUWEWorldPopRuleSetArray> Rules;
    
    UUWEWorldPopRegionConfigDA();

};

