#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Engine/HitResult.h"
#include "AbilityInfoData.h"
#include "AbilityInfo.generated.h"

class AActor;
class UPrimitiveComponent;

UINTERFACE(Blueprintable)
class UWEINTERFACES_API UAbilityInfo : public UInterface {
    GENERATED_BODY()
};

class UWEINTERFACES_API IAbilityInfo : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FAbilityInfoData GetAbilityInfo(AActor* HoverActor, AActor* ForActor, float Distance, UPrimitiveComponent* HoverComponent, FHitResult HitResult);
    
};

