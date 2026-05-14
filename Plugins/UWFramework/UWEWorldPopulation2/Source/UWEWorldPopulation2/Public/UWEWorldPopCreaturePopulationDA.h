#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UWEWorldPopCreaturePopulationDA.generated.h"

class AActor;

UCLASS(BlueprintType)
class UWEWORLDPOPULATION2_API UUWEWorldPopCreaturePopulationDA : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftClassPtr<AActor>> CreatureClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpawnPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxPopulationControl;
    
    UUWEWorldPopCreaturePopulationDA();

};

