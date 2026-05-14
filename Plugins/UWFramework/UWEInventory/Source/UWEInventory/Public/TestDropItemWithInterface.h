#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UWEInventoryItemInterface.h"
#include "TestDropItemWithInterface.generated.h"

UCLASS()
class UWEINVENTORY_API ATestDropItemWithInterface : public AActor, public IUWEInventoryItemInterface {
    GENERATED_BODY()
public:
    ATestDropItemWithInterface(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

