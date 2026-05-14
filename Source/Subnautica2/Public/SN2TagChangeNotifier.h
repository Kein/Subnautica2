#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "SN2TagChangeNotifier.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SUBNAUTICA2_API USN2TagChangeNotifier : public UActorComponent {
    GENERATED_BODY()
public:
    USN2TagChangeNotifier(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void TagRemoved(FGameplayTag Tag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void TagAdded(FGameplayTag Tag);
    
};

