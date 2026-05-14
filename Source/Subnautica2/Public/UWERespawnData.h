#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "UWERespawnData.generated.h"

class AActor;
class UUWEItemType;

USTRUCT(BlueprintType)
struct FUWERespawnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag DeathReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag RespawnReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* DeathInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector DeathLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector RespawnLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag RespawnLocationTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UUWEItemType*> LostItems;
    
    SUBNAUTICA2_API FUWERespawnData();
};

