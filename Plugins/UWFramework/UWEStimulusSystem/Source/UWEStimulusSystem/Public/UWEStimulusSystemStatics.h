#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "UWEStimulusSystemStatics.generated.h"

class AActor;
class UGameplayEffect;

UCLASS(BlueprintType)
class UWESTIMULUSSYSTEM_API UUWEStimulusSystemStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWEStimulusSystemStatics();

    UFUNCTION(BlueprintCallable)
    static FActiveGameplayEffectHandle ApplyStimulusEffect(const AActor* Target, FGameplayTagContainer StimulusTags, TSubclassOf<UGameplayEffect> BaseEffec);
    
};

