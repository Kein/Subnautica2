#pragma once
#include "CoreMinimal.h"
#include "UWEActorDataAsset.h"
#include "UWERegrowablePlantData.generated.h"

class AActor;
class AStaticMeshActor;
class UUWERegrowablePlantData;

UCLASS(EditInlineNew)
class UWEFARMING_API UUWERegrowablePlantData : public UUWEActorDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Growth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxGrowth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GrowthRate;
    
    UUWERegrowablePlantData();

    UFUNCTION(BlueprintCallable)
    static AActor* ReplaceDummyPlant(AStaticMeshActor* PlantToReplace);
    
    UFUNCTION(BlueprintPure)
    static UUWERegrowablePlantData* GetRegrowablePlantDataForActor(const AActor* Actor);
    
};

