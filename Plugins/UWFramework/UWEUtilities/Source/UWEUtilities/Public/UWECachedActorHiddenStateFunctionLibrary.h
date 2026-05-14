#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UWECachedActorHiddenState.h"
#include "UWECachedActorHiddenStateFunctionLibrary.generated.h"

class AActor;

UCLASS(BlueprintType)
class UWEUTILITIES_API UUWECachedActorHiddenStateFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWECachedActorHiddenStateFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static FUWECachedActorHiddenState SetActorHiddenState(AActor* TargetActor, bool bNewHidden);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyActorHiddenState(AActor* TargetActor, const FUWECachedActorHiddenState& CachedHiddenState);
    
};

