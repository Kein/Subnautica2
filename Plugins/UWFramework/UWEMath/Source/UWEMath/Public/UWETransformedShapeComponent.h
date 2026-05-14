#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "UWEShapeTransformed.h"
#include "UWETransformedShapeComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEMATH_API UUWETransformedShapeComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWEShapeTransformed Shape;
    
public:
    UUWETransformedShapeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    FUWEShapeTransformed GetShape();
    
};

