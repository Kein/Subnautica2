#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UWETargetActor.h"
#include "UWEHoverTargetInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class UUWEHoverTargetInterface : public UInterface {
    GENERATED_BODY()
};

class IUWEHoverTargetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSelectedTarget(AActor* InTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHoverTarget(const FUWETargetActor HoverTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AActor* GetSelectedTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FUWETargetActor GetHoverTarget();
    
};

