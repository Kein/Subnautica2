#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "GameplayTagContainer.h"
#include "UWEGenericAbilityActorData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct UWEABILITYTASK_API FUWEGenericAbilityActorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FString String;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FGameplayTag GameplayTag;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float FloatValue;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 IntValue;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FVector_NetQuantize Location;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FVector_NetQuantizeNormal Rotation;
    
    FUWEGenericAbilityActorData();
};

