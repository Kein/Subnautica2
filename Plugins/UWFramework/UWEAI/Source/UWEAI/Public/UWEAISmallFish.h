#pragma once
#include "CoreMinimal.h"
#include "UWEInventoryItemInterface.h"
#include "UWEAIPawn.h"
#include "UWEAISmallFish.generated.h"

UCLASS()
class UWEAI_API AUWEAISmallFish : public AUWEAIPawn, public IUWEInventoryItemInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    uint8 bHasBeenPickedUp: 1;
    
    AUWEAISmallFish(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

