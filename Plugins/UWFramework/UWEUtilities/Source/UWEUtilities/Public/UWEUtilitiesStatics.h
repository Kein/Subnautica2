#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "UWEUtilitiesStatics.generated.h"

class AActor;
class UWorld;

UCLASS(BlueprintType)
class UWEUTILITIES_API UUWEUtilitiesStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWEUtilitiesStatics();

    UFUNCTION(BlueprintPure)
    static FText GetTextFromGameplayTag(const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintPure)
    static UWorld* GetMainPlayWorld();
    
    UFUNCTION(BlueprintCallable)
    static void FlushNetDormancyIfNecessary(AActor* Actor);
    
};

