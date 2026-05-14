#pragma once
#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "UWEGameplayEffect.generated.h"

UCLASS()
class UWEABILITYSYSTEM_API UUWEGameplayEffect : public UGameplayEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool CanBeSaved;
    
    UUWEGameplayEffect();

};

