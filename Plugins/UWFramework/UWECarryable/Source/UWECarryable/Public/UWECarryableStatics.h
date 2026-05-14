#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayAbilitySpecHandle.h"
#include "UWECarryableStatics.generated.h"

class AActor;

UCLASS(BlueprintType)
class UWECARRYABLE_API UUWECarryableStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWECarryableStatics();

    UFUNCTION(BlueprintCallable)
    static TArray<FGameplayAbilitySpecHandle> GrantCarryableAbilities(AActor* CarryableActor, AActor* TargetActor);
    
};

