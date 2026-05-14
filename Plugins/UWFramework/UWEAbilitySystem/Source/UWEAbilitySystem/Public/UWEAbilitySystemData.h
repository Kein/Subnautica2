#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWEAbilitySystemData.generated.h"

class UUWEAbilitySet;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEABILITYSYSTEM_API UUWEAbilitySystemData : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UUWEAbilitySet> AbilitySet;
    
    UUWEAbilitySystemData(const FObjectInitializer& ObjectInitializer);

};

