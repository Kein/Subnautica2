#pragma once
#include "CoreMinimal.h"
#include "SN2CustomizationItemViewModelArray.generated.h"

class USN2CustomizationItemViewModel;

USTRUCT(BlueprintType)
struct FSN2CustomizationItemViewModelArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<USN2CustomizationItemViewModel*> Items;
    
    SUBNAUTICA2_API FSN2CustomizationItemViewModelArray();
};

