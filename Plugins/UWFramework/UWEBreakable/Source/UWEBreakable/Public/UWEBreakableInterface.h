#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Engine/HitResult.h"
#include "UWEBreakableInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class UWEBREAKABLE_API UUWEBreakableInterface : public UInterface {
    GENERATED_BODY()
};

class UWEBREAKABLE_API IUWEBreakableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBreak(AActor* Instigator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsBreakingDisabled(AActor* FromActor, const FHitResult& HitResult);
    
};

