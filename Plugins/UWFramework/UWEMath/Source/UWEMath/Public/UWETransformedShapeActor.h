#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UWEShapeTransformed.h"
#include "UWETransformedShapeActor.generated.h"

class UUWETransformedShapeComponent;

UCLASS()
class UWEMATH_API AUWETransformedShapeActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWETransformedShapeComponent* TransformedShapeComponent;
    
public:
    AUWETransformedShapeActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    FUWEShapeTransformed GetShape();
    
};

