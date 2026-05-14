#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "OnAttachmentChangedDelegate.h"
#include "UWECarryableRootComponent.generated.h"

class UUWEInventoryComponent;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWECARRYABLE_API UUWECarryableRootComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnAttachmentChanged AttachmentChanged;
    
protected:
    UPROPERTY(EditAnywhere)
    float InventoryUpdateRate;
    
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UUWEInventoryComponent>> ParentInventories;
    
public:
    UUWECarryableRootComponent(const FObjectInitializer& ObjectInitializer);

};

