#pragma once
#include "CoreMinimal.h"
#include "UWEImGuiComponent.h"
#include "UWEInventoryDiagnostic.generated.h"

class UUWEInventorySubsystem;
class UUWEItemType;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEINVENTORY_API UUWEInventoryDiagnostic : public UUWEImGuiComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UUWEInventorySubsystem* Inventory;
    
    UPROPERTY()
    TArray<UUWEItemType*> AllItemTypes;
    
public:
    UUWEInventoryDiagnostic(const FObjectInitializer& ObjectInitializer);

};

