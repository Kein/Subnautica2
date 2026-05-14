#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayMessageGeneric.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FGameplayMessageGeneric {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText Text;
    
    //FIXME: WTF?
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 Int;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FString String;

    //FIXME: WTF?
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    double Float;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FGameplayTagContainer Tags;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    AActor* Actor;
    
    UWEGAMEPLAYMESSAGERUNTIME_API FGameplayMessageGeneric();
};

