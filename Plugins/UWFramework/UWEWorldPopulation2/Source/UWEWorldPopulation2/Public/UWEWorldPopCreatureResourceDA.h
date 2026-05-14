#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEWorldPopCreatureData.h"
#include "EUWESpawnRotationMode.h"
#include "UWEWorldPopResourceDA.h"
#include "UWEWorldPopCreatureResourceDA.generated.h"

UCLASS()
class UWEWORLDPOPULATION2_API UUWEWorldPopCreatureResourceDA : public UUWEWorldPopResourceDA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWEWorldPopCreatureData WorldPopCreatureData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EUWESpawnRotationMode SpawnRotationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bPersistentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAutomaticSpawning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString FeatureFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer AllowEncroachingVolumeTags;
    
    UUWEWorldPopCreatureResourceDA();

};

