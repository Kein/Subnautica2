#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "UWEAlertStatics.generated.h"

class AActor;

UCLASS(BlueprintType)
class UWEALERTS_API UUWEAlertStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWEAlertStatics();

    UFUNCTION(BlueprintCallable)
    static void RemoveAlert(AActor* Target, FGameplayTag AlertTag, FGameplayTag SeverityTag);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayEffectSpecHandle AddAlert(AActor* Target, FGameplayTag AlertTag, FGameplayTag SeverityTag, float duration);
    
};

