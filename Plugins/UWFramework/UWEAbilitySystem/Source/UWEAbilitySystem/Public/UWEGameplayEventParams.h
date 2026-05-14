#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "UWEGameplayEventParams.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct UWEABILITYSYSTEM_API FUWEGameplayEventParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag TagParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer TagContainerParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UGameplayEffect> GameplayEffectParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 IntParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FloatParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector VectorParam;
    
    FUWEGameplayEventParams();
};

