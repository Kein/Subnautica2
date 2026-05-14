#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/HitResult.h"
#include "UWETargetActor.h"
#include "UWEInteractStatics.generated.h"

class UObject;
class UPrimitiveComponent;

UCLASS(BlueprintType, Config=Game)
class UWEINTERACT_API UUWEInteractStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWEInteractStatics();

    UFUNCTION(BlueprintCallable)
    static void SetHoverTargetFromHitResult(const FHitResult& Hit, FUWETargetActor& HoverTarget);
    
    UFUNCTION(BlueprintPure)
    static UObject* GetInteractableFromComponentOrActor(UPrimitiveComponent* Component);
    
};

