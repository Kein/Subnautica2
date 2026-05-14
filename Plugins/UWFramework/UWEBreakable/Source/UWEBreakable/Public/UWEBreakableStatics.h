#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/HitResult.h"
#include "UWEBreakableStatics.generated.h"

class AActor;
class UGameplayAbility;

UCLASS(BlueprintType)
class UWEBREAKABLE_API UUWEBreakableStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWEBreakableStatics();

private:
    UFUNCTION(BlueprintCallable)
    static bool IsBreakingDisabled(AActor* FromActor, AActor* BreakableActor, const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable)
    static bool BreakBreakableNoAbility(AActor* Instigator, AActor* BreakableActor);
    
    UFUNCTION(BlueprintCallable)
    static bool BreakBreakable(UGameplayAbility* GameplayAbility, AActor* BreakableActor);
    
};

